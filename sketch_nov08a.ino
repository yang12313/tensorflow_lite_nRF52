#include <SparkFunLSM6DS3.h>
#include "model.h"
#include <I2C.h>
#include <Wire.h>
#include <ArduinoSTL.h>
#include <system_configuration.h>
#include <unwind-cxx.h>
#include <iostream>
#include <SparkFunLSM6DS3.h>
#include <bluefruit.h>

#include <TensorFlowLite.h>
#include <tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h>
#include <tensorflow/lite/experimental/micro/micro_error_reporter.h>
#include <tensorflow/lite/experimental/micro/micro_interpreter.h>
#include <tensorflow/lite/schema/schema_generated.h>
#include <tensorflow/lite/version.h>


const int numSamples = 90;
int samplesRead = numSamples;

tflite::MicroErrorReporter tflErrorReporter;
tflite::ops::micro::AllOpsResolver tflOpsResolver;

const tflite::Model* tflModel = nullptr;
tflite::MicroInterpreter* tflInterpreter = nullptr;
TfLiteTensor* tflInputTensor = nullptr;
TfLiteTensor* tflOutputTensor = nullptr;

constexpr int tensorArenaSize = 8 * 1024;
byte tensorArena[tensorArenaSize];

const char* GESTURES[] = {
  "walking",
  "circling",
  "rest",
  "waving"
};
#define NUM_GESTURES (sizeof(GESTURES) / sizeof(GESTURES[0]));

LSM6DS3 myIMU;
int minVal=265;
int maxVal=402;

int pushButton = 2;

int Pin5 = A4; //analog pin 5
// int flexSensorPin6 = A6; //analog pin 6
int buttonState = 0;


/* IMU data */
int16_t ax, ay, az;
int16_t gx, gy, gz;
int16_t tempRaw;
float accX, accY, accZ;
float gyroX, gyroY, gyroZ;
float smooth_ax, smooth_ay, smooth_az;
float smooth_gx, smooth_gy, smooth_gz;


float gyroXangle, gyroYangle; // Angle calculate using the gyro only
float compAngleX, compAngleY; // Calculated angle using a complementary filter
float kalAngleX, kalAngleY; // Calculated angle using a Kalman filter

uint32_t timer;
uint8_t i2cData[14]; // Buffer for I2C data

// TODO: Make calibration routine
const uint8_t IMUAddress = 0x6B; // AD0 is logic low on the PCB
const uint16_t I2C_TIMEOUT = 1000; // Used to check for errors in I2C communication

uint8_t i2cWrite(uint8_t registerAddress, uint8_t data, bool sendStop) {
  return i2cWrite(registerAddress, &data, 1, sendStop); // Returns 0 on success
}

uint8_t i2cWrite(uint8_t registerAddress, uint8_t *data, uint8_t length, bool sendStop) {
  Wire.beginTransmission(IMUAddress);
  Wire.write(registerAddress);
  Wire.write(data, length);
  uint8_t rcode = Wire.endTransmission(sendStop); // Returns 0 on success
  if (rcode) {
    Serial.print(F("i2cWrite failed: "));
    Serial.println(rcode);
  }
  return rcode; // See: http://arduino.cc/en/Reference/WireEndTransmission
}

uint8_t i2cRead(uint8_t registerAddress, uint8_t *data, uint8_t nbytes) {
  uint32_t timeOutTimer;
  Wire.beginTransmission(IMUAddress);
  Wire.write(registerAddress);
  uint8_t rcode = Wire.endTransmission(false); // Don't release the bus
  
  if (rcode) {
    Serial.print(F("i2cRead failed: "));
    Serial.println(rcode);
    return rcode; // See: http://arduino.cc/en/Reference/WireEndTransmission
  }

  Wire.requestFrom(IMUAddress, nbytes, (uint8_t)true); // Send a repeated start and then release the bus after reading
  for (uint8_t i = 0; i < nbytes; i++) {
    if (Wire.available())
      data[i] = Wire.read();
    else {
      timeOutTimer = micros();
      while (((micros() - timeOutTimer) < I2C_TIMEOUT) && !Wire.available());
      if (Wire.available())
        data[i] = Wire.read();
      else {
        Serial.println(F("i2cRead timeout"));
        return 5; // This error value is not already taken by endTransmission
      }
    }
  }
  return 0; // Success
}


void setup() {
  // put your setup code here, to run once:
  Serial.begin(38400);
  myIMU.begin();
  pinMode(Pin5, INPUT);
  #if ARDUINO >= 157
    Wire.setClock(400000UL); // Set I2C frequency to 400kHz
    #else
      TWBR = ((F_CPU / 400000UL) - 16) / 2; // Set I2C frequency to 400kHz
  #endif
  // IMU Configuration
  //Over-ride default settings if desired
  myIMU.settings.gyroEnabled = 1;  //Can be 0 or 1
  myIMU.settings.gyroRange = 245;   //Max deg/s.  Can be: 125, 245, 500, 1000, 2000
  myIMU.settings.gyroSampleRate = 833;   //Hz.  Can be: 13, 26, 52, 104, 208, 416, 833, 1666
  myIMU.settings.gyroBandWidth = 50;  //Hz.  Can be: 50, 100, 200, 400;
  myIMU.settings.gyroFifoEnabled = 1;  //Set to include gyro in FIFO
  myIMU.settings.gyroFifoDecimation = 1;  //set 1 for on /1

  myIMU.settings.accelEnabled = 1;
  myIMU.settings.accelRange = 4;      //Max G force readable.  Can be: 2, 4, 8, 16
  myIMU.settings.accelSampleRate = 833;  //Hz.  Can be: 13, 26, 52, 104, 208, 416, 833, 1666, 3332, 6664, 13330
  myIMU.settings.accelBandWidth = 200;  //Hz.  Can be: 50, 100, 200, 400;
  myIMU.settings.accelFifoEnabled = 1;  //Set to include accelerometer in the FIFO
  myIMU.settings.accelFifoDecimation = 1;  //set 1 for on /1
  myIMU.settings.tempEnabled = 0;

  //Non-basic mode settings
  myIMU.settings.commMode = 1;

  //FIFO control settings
  myIMU.settings.fifoThreshold = 100;  //Can be 0 to 4096 (16 bit bytes)
  myIMU.settings.fifoSampleRate = 50;  //Hz.  Can be: 10, 25, 50, 100, 200, 400, 800, 1600, 3300, 6600
  myIMU.settings.fifoModeWord = 6;  //FIFO mode.
  //FIFO mode.  Can be:
  //  0 (Bypass mode, FIFO off)
  //  1 (Stop when full)
  //  3 (Continuous during trigger)
  //  4 (Bypass until trigger)
  //  6 (Continous mode)




  // To do list!!!!!!!!!!!!!!!!!
  i2cData[0] = 7; // Set the sample rate to 1000Hz - 8kHz/(7+1) = 1000Hz
  i2cData[1] = 0x00; // Disable FSYNC and set 260 Hz Acc filtering, 256 Hz Gyro filtering, 8 KHz sampling
  i2cData[2] = 0x00; // Set Gyro Full Scale Range to ±250deg/s
  i2cData[3] = 0x00; // Set Accelerometer Full Scale Range to ±2g

  // while(i2cWrite(CTRL1_XL,LSM6DS3_ACC_GYRO_ODR_XL_1660Hz,true));
  
  // while (i2cWrite(0x19, i2cData, 4, false)); // Write to all four registers at once
  // while (i2cWrite(0x6B, 0x01, true)); // PLL with X axis gyroscope reference and disable sleep mode
  // while (i2cWrite(0x6b,))
  while (i2cRead(LSM6DS3_ACC_GYRO_WHO_AM_I_REG, i2cData, 1));
  if (i2cData[0] != 0x69) { // Read "WHO_AM_I" register
    Serial.print(F("Error reading sensor"));
    while (1);
  }

  delay(100); // Wait for sensor to stabilize

  /* Set kalman and gyro starting angle */
  while (i2cRead(0X28, i2cData, 6));
  accX = (int16_t)((i2cData[0] << 8) | i2cData[1]);
  accY = (int16_t)((i2cData[2] << 8) | i2cData[3]);
  accZ = (int16_t)((i2cData[4] << 8) | i2cData[5]);

  // Source: http://www.freescale.com/files/sensors/doc/app_note/AN3461.pdf eq. 25 and eq. 26
  // atan2 outputs the value of -π to π (radians) - see http://en.wikipedia.org/wiki/Atan2
  // It is then converted from radians to degrees
#ifdef RESTRICT_PITCH // Eq. 25 and 26
  double roll  = atan2(accY, accZ) * RAD_TO_DEG;
  double pitch = atan(-accX / sqrt(accY * accY + accZ * accZ)) * RAD_TO_DEG;
#else // Eq. 28 and 29
  double roll  = atan(accY / sqrt(accX * accX + accZ * accZ)) * RAD_TO_DEG;
  double pitch = atan2(-accX, accZ) * RAD_TO_DEG;
#endif

//  kalmanX.setAngle(roll); // Set starting angle
//  kalmanY.setAngle(pitch);
  gyroXangle = roll;
  gyroYangle = pitch;
  compAngleX = roll;
  compAngleY = pitch;

  timer = micros();

  tflModel = tflite::GetModel(model);
  if (tflModel->version() != TFLITE_SCHEMA_VERSION) {
  Serial.println("Model schema mismatch!");
  while (1);
}
  tflInterpreter = new tflite::MicroInterpreter(tflModel, tflOpsResolver, tensorArena, tensorArenaSize, &tflErrorReporter);
  tflInterpreter->AllocateTensors();
  tflInputTensor = tflInterpreter->input(0);
  tflOutputTensor = tflInterpreter->output(0);

}

void loop() {
  // put your main code here, to run repeatedly:
  float aX, aY, aZ, gX, gY, gZ;

  while(samplesRead == numSamples){
//    if(myIMU.accelerationAvailable()){
//      myIMU.readAcceleration(aX, aY, aZ);
//      float aSum = fabs(aX) + fabs(aY) + fabs(aZ);

//      if(aSum >= accelerationThreshold){
//        samplesRead = 0;
//        break;
//      }
//    }
  }

  while(samplesRead < numSamples){
    // check if new acceleration AND gyroscope data is available
    aX =  myIMU.readFloatAccelX();
    aY =  myIMU.readFloatAccelY();
    aZ =  myIMU.readFloatAccelZ();
    gX =  myIMU.readFloatGyroX();
    gY =  myIMU.readFloatGyroY();
    gZ =  myIMU.readFloatGyroZ();
    tflInputTensor->data.f[samplesRead * 6 + 0] = aX;
    tflInputTensor->data.f[samplesRead * 6 + 1] = aY;
    tflInputTensor->data.f[samplesRead * 6 + 2] = aZ;
    tflInputTensor->data.f[samplesRead * 6 + 3] = gX;
    tflInputTensor->data.f[samplesRead * 6 + 4] = gY;
    tflInputTensor->data.f[samplesRead * 6 + 5] = gZ;
    samplesRead++;
    if (samplesRead == numSamples) {
      // Run inferencing
      TfLiteStatus invokeStatus = tflInterpreter->Invoke();
      if (invokeStatus != kTfLiteOk) {
        Serial.println("Invoke failed!");

      }
//      for (int i = 0; i < NUM_GESTURES; i++) {
//        Serial.print(GESTURES[i]);
//        Serial.print(": ");
//        Serial.println(tflOutputTensor->data.f[i], 6);
//      }
//      Serial.println();
  }
}
}
