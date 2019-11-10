# tensorflow_lite_nRF52
For debug

Please manually download the libraries associated to the file to complete the compilation. 

### Error log is shown below:
````
Arduino: 1.8.9 (Windows 10), Board: "Adafruit Bluefruit Feather nRF52832, 0.2.12 SoftDevice s132 6.1.1, Level 0 (Release)"

In file included from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\stdlib.h:36:0,

                 from C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/Arduino.h:6,

                 from sketch\sketch_nov08a.ino.cpp:1:

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:27:10: error: '::abort' has not been declared

  using ::abort;

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:28:10: error: '::abs' has not been declared

  using ::abs;

          ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:29:10: error: '::atexit' has not been declared

  using ::atexit;

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:30:10: error: '::atol' has not been declared

  using ::atol;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:31:10: error: '::atof' has not been declared

  using ::atof;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:32:10: error: '::atoi' has not been declared

  using ::atoi;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:33:10: error: '::bsearch' has not been declared

  using ::bsearch;

          ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:34:10: error: '::calloc' has not been declared

  using ::calloc;

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:35:10: error: '::div' has not been declared

  using ::div;

          ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:36:10: error: '::exit' has not been declared

  using ::exit;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:37:10: error: '::free' has not been declared

  using ::free;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:38:10: error: '::getenv' has not been declared

  using ::getenv;

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:39:10: error: '::labs' has not been declared

  using ::labs;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:40:10: error: '::ldiv' has not been declared

  using ::ldiv;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:41:10: error: '::malloc' has not been declared

  using ::malloc;

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:42:10: error: '::qsort' has not been declared

  using ::qsort;

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:43:10: error: '::rand' has not been declared

  using ::rand;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:44:10: error: '::realloc' has not been declared

  using ::realloc;

          ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:45:10: error: '::srand' has not been declared

  using ::srand;

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:46:10: error: '::strtod' has not been declared

  using ::strtod;

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:47:10: error: '::strtol' has not been declared

  using ::strtol;

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:48:10: error: '::strtoul' has not been declared

  using ::strtoul;

          ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:49:10: error: '::system' has not been declared

  using ::system;

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cstdlib:63:9: error: 'ldiv_t' does not name a type

  inline ldiv_t div(long i, long j){

         ^~~~~~

In file included from C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/Arduino.h:6:0,

                 from sketch\sketch_nov08a.ino.cpp:1:

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\stdlib.h:38:12: error: 'std::abort' has not been declared

 using std::abort;

            ^~~~~

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\stdlib.h:39:12: error: 'std::atexit' has not been declared

 using std::atexit;

            ^~~~~~

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\stdlib.h:40:12: error: 'std::exit' has not been declared

 using std::exit;

            ^~~~

In file included from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\math.h:36:0,

                 from C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/Arduino.h:8,

                 from sketch\sketch_nov08a.ino.cpp:1:

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:51:10: error: '::acos' has not been declared

  using ::acos;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:52:10: error: '::asin' has not been declared

  using ::asin;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:53:10: error: '::atan' has not been declared

  using ::atan;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:54:10: error: '::atan2' has not been declared

  using ::atan2;

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:55:10: error: '::ceil' has not been declared

  using ::ceil;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:56:10: error: '::cos' has not been declared

  using ::cos;

          ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:57:10: error: '::cosh' has not been declared

  using ::cosh;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:58:10: error: '::exp' has not been declared

  using ::exp;

          ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:59:10: error: '::fabs' has not been declared

  using ::fabs;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:60:10: error: '::floor' has not been declared

  using ::floor;

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:61:10: error: '::fmod' has not been declared

  using ::fmod;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:62:10: error: '::frexp' has not been declared

  using ::frexp;

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:63:10: error: '::ldexp' has not been declared

  using ::ldexp;

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:64:10: error: '::log' has not been declared

  using ::log;

          ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:65:10: error: '::log10' has not been declared

  using ::log10;

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:66:10: error: '::modf' has not been declared

  using ::modf;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:67:10: error: '::pow' has not been declared

  using ::pow;

          ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:68:10: error: '::sin' has not been declared

  using ::sin;

          ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:69:10: error: '::sinh' has not been declared

  using ::sinh;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:70:10: error: '::sqrt' has not been declared

  using ::sqrt;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:71:10: error: '::tan' has not been declared

  using ::tan;

          ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:72:10: error: '::tanh' has not been declared

  using ::tanh;

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::abs(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:76:10: error: 'fabsf' was not declared in this scope

   return fabsf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:76:10: note: suggested alternative: 'abs'

   return fabsf(x);

          ^~~~~

          abs

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::acos(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:79:10: error: 'acosf' was not declared in this scope

   return acosf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:79:10: note: suggested alternative: 'acos'

   return acosf(x);

          ^~~~~

          acos

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::asin(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:82:10: error: 'asinf' was not declared in this scope

   return asinf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:82:10: note: suggested alternative: 'asin'

   return asinf(x);

          ^~~~~

          asin

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::atan(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:85:10: error: 'atanf' was not declared in this scope

   return atanf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:85:10: note: suggested alternative: 'atan'

   return atanf(x);

          ^~~~~

          atan

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::atan2(float, float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:88:10: error: 'atan2f' was not declared in this scope

   return atan2f(y, x);

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:88:10: note: suggested alternative: 'atan2'

   return atan2f(y, x);

          ^~~~~~

          atan2

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::ceil(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:91:10: error: 'ceilf' was not declared in this scope

   return ceilf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:91:10: note: suggested alternative: 'ceil'

   return ceilf(x);

          ^~~~~

          ceil

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::cos(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:94:10: error: 'cosf' was not declared in this scope

   return cosf(x);

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:94:10: note: suggested alternative: 'cos'

   return cosf(x);

          ^~~~

          cos

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::cosh(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:97:10: error: 'coshf' was not declared in this scope

   return coshf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:97:10: note: suggested alternative: 'cosh'

   return coshf(x);

          ^~~~~

          cosh

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::exp(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:100:10: error: 'expf' was not declared in this scope

   return expf(x);

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:100:10: note: suggested alternative: 'exp'

   return expf(x);

          ^~~~

          exp

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::fabs(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:103:10: error: 'fabsf' was not declared in this scope

   return fabsf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:103:10: note: suggested alternative: 'fabs'

   return fabsf(x);

          ^~~~~

          fabs

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::floor(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:106:10: error: 'floorf' was not declared in this scope

   return floorf(x);

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:106:10: note: suggested alternative: 'floor'

   return floorf(x);

          ^~~~~~

          floor

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::fmod(float, float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:109:10: error: 'fmodf' was not declared in this scope

   return fmodf(x, y);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:109:10: note: suggested alternative: 'fmod'

   return fmodf(x, y);

          ^~~~~

          fmod

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::frexp(float, int*)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:112:10: error: 'frexpf' was not declared in this scope

   return frexpf(x, exp);

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:112:10: note: suggested alternative: 'frexp'

   return frexpf(x, exp);

          ^~~~~~

          frexp

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::ldexp(float, int)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:115:10: error: 'ldexpf' was not declared in this scope

   return ldexpf(x, exp);

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:115:10: note: suggested alternative: 'ldexp'

   return ldexpf(x, exp);

          ^~~~~~

          ldexp

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::log(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:118:10: error: 'logf' was not declared in this scope

   return logf(x);

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:118:10: note: suggested alternative: 'log'

   return logf(x);

          ^~~~

          log

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::log10(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:121:10: error: 'log10f' was not declared in this scope

   return log10f(x);

          ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:121:10: note: suggested alternative: 'log10'

   return log10f(x);

          ^~~~~~

          log10

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::modf(float, float*)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:124:10: error: 'modff' was not declared in this scope

   return modff(x, inptr);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:124:10: note: suggested alternative: 'modf'

   return modff(x, inptr);

          ^~~~~

          modf

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::pow(float, float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:127:10: error: 'powf' was not declared in this scope

   return powf(x, y);

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:127:10: note: suggested alternative: 'pow'

   return powf(x, y);

          ^~~~

          pow

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::pow(float, int)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:131:34: error: call of overloaded 'pow(double, double)' is ambiguous

   return pow((double)x, (double)y);

                                  ^

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:126:15: note: candidate: float std::pow(float, float)

  inline float pow  (float x, float y){

               ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:130:15: note: candidate: float std::pow(float, int)

  inline float pow  (float x, int y){

               ^~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::sin(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:135:10: error: 'sinf' was not declared in this scope

   return sinf(x);

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:135:10: note: suggested alternative: 'sin'

   return sinf(x);

          ^~~~

          sin

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::sinh(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:138:10: error: 'sinhf' was not declared in this scope

   return sinhf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:138:10: note: suggested alternative: 'sinh'

   return sinhf(x);

          ^~~~~

          sinh

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::sqrt(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:141:10: error: 'sqrtf' was not declared in this scope

   return sqrtf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:141:10: note: suggested alternative: 'sqrt'

   return sqrtf(x);

          ^~~~~

          sqrt

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::tan(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:144:10: error: 'tanf' was not declared in this scope

   return tanf(x);

          ^~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:144:10: note: suggested alternative: 'tan'

   return tanf(x);

          ^~~~

          tan

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath: In function 'float std::tanh(float)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:147:10: error: 'tanhf' was not declared in this scope

   return tanhf(x);

          ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/cmath:147:10: note: suggested alternative: 'tanh'

   return tanhf(x);

          ^~~~~

          tanh

In file included from C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/Arduino.h:47:0,

                 from sketch\sketch_nov08a.ino.cpp:1:

C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/rtos.h: In function 'void* rtos_malloc(size_t)':

C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/rtos.h:79:68: error: 'malloc' was not declared in this scope

   return (xTaskGetSchedulerState() == taskSCHEDULER_NOT_STARTED) ? malloc(_size) : pvPortMalloc(_size);

                                                                    ^~~~~~

C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/rtos.h:79:68: note: suggested alternative: 'maxof'

   return (xTaskGetSchedulerState() == taskSCHEDULER_NOT_STARTED) ? malloc(_size) : pvPortMalloc(_size);

                                                                    ^~~~~~

                                                                    maxof

C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/rtos.h: In function 'void rtos_free(void*)':

C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/rtos.h:84:68: error: 'free' was not declared in this scope

   return (xTaskGetSchedulerState() == taskSCHEDULER_NOT_STARTED) ? free(pv) : vPortFree(pv);

                                                                    ^~~~

C:\Users\neoya\AppData\Local\Arduino15\packages\adafruit\hardware\nrf52\0.13.0\cores\nRF5/rtos.h:84:91: error: return-statement with a value, in function returning 'void' [-fpermissive]

   return (xTaskGetSchedulerState() == taskSCHEDULER_NOT_STARTED) ? free(pv) : vPortFree(pv);

                                                                                           ^

In file included from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/char_traits:22:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/iosfwd:21,

                 from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/serstream:48,

                 from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/ArduinoSTL.h:12,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:5:

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/memory: In function 'std::pair<T*, int> std::get_temporary_buffer(ptrdiff_t)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/memory:105:33: error: there are no arguments to 'malloc' that depend on a template parameter, so a declaration of 'malloc' must be available [-fpermissive]

  retval.first = static_cast<T*>(malloc(n * sizeof(T)));

                                 ^~~~~~

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/memory:105:33: note: (if you use '-fpermissive', G++ will accept your code, but allowing the use of an undeclared name is deprecated)

In file included from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/vector:25:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/string:25,

                 from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/locale:22,

                 from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/ios:22,

                 from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/serstream:49,

                 from C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/ArduinoSTL.h:12,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:5:

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/algorithm: In function 'void std::random_shuffle(RandomAccessIterator, RandomAccessIterator)':

C:\Users\neoya\Documents\Arduino\libraries\ArduinoSTL/algorithm:767:31: error: there are no arguments to 'rand' that depend on a template parameter, so a declaration of 'rand' must be available [-fpermissive]

    iter_swap(first, (first + (rand() % (last - first) ) ) );

                               ^~~~

In file included from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/base.h:56:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:21,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:13:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h: In function 'void flatbuffers::vector_emplace_back(std::vector<T>*, V&&)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:77:31: error: 'forward' is not a member of 'std'

     vector->emplace_back(std::forward<V>(data));

                               ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:77:31: note: suggested alternative: 'for_each'

     vector->emplace_back(std::forward<V>(data));

                               ^~~~~~~

                               for_each

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:77:40: error: expected primary-expression before '>' token

     vector->emplace_back(std::forward<V>(data));

                                        ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:137:50: error: 'is_scalar' in namespace 'std' does not name a template type

     template <typename T> using is_scalar = std::is_scalar<T>;

                                                  ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:138:60: error: 'is_same' in namespace 'std' does not name a template type

     template <typename T, typename U> using is_same = std::is_same<T,U>;

                                                            ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:139:58: error: 'is_floating_point' in namespace 'std' does not name a template type

     template <typename T> using is_floating_point = std::is_floating_point<T>;

                                                          ^~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:140:52: error: 'is_unsigned' in namespace 'std' does not name a template type

     template <typename T> using is_unsigned = std::is_unsigned<T>;

                                                    ^~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:141:54: error: 'make_unsigned' in namespace 'std' does not name a template type

     template <typename T> using make_unsigned = std::make_unsigned<T>;

                                                      ^~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/stl_emulation.h:173:48: error: 'unique_ptr' in namespace 'std' does not name a template type

     template <class T> using unique_ptr = std::unique_ptr<T>;

                                                ^~~~~~~~~~

In file included from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:21:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:13:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: In member function 'flatbuffers::Vector<T>::return_type flatbuffers::Vector<T>::LookupByKey(K) const':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:321:32: error: 'bsearch' is not a member of 'std'

     void *search_result = std::bsearch(

                                ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:321:32: note: suggested alternative: 'search'

     void *search_result = std::bsearch(

                                ^~~~~~~

                                search

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: In function 'flatbuffers::Vector<flatbuffers::Offset<T> >* flatbuffers::VectorCast(flatbuffers::Vector<flatbuffers::Offset<U> >*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:379:22: error: 'is_base_of' is not a member of 'std'

   static_assert(std::is_base_of<T, U>::value, "Unrelated types");

                      ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:379:22: note: suggested alternative: 'ios_base'

   static_assert(std::is_base_of<T, U>::value, "Unrelated types");

                      ^~~~~~~~~~

                      ios_base

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:379:34: error: expected primary-expression before ',' token

   static_assert(std::is_base_of<T, U>::value, "Unrelated types");

                                  ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:379:36: error: expected string-literal before 'U'

   static_assert(std::is_base_of<T, U>::value, "Unrelated types");

                                    ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:379:36: error: expected ')' before 'U'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: In function 'const flatbuffers::Vector<flatbuffers::Offset<T> >* flatbuffers::VectorCast(const flatbuffers::Vector<flatbuffers::Offset<U> >*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:385:22: error: 'is_base_of' is not a member of 'std'

   static_assert(std::is_base_of<T, U>::value, "Unrelated types");

                      ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:385:22: note: suggested alternative: 'ios_base'

   static_assert(std::is_base_of<T, U>::value, "Unrelated types");

                      ^~~~~~~~~~

                      ios_base

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:385:34: error: expected primary-expression before ',' token

   static_assert(std::is_base_of<T, U>::value, "Unrelated types");

                                  ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:385:36: error: expected string-literal before 'U'

   static_assert(std::is_base_of<T, U>::value, "Unrelated types");

                                    ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:385:36: error: expected ')' before 'U'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: In member function 'flatbuffers::vector_downward& flatbuffers::vector_downward::operator=(flatbuffers::vector_downward&&)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:688:31: error: 'move' is not a member of 'std'

     vector_downward temp(std::move(other));

                               ^~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:688:31: note: suggested alternative: 'remove'

     vector_downward temp(std::move(other));

                               ^~~~

                               remove

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1502:18: error: 'function' in namespace 'std' does not name a template type

       const std::function<T (size_t i)> &f) {

                  ^~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1502:26: error: expected ',' or '...' before '<' token

       const std::function<T (size_t i)> &f) {

                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1582:38: error: 'function' in namespace 'std' does not name a template type

       size_t vector_size, const std::function<void(size_t i, T *)> &filler) {

                                      ^~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1582:46: error: expected ',' or '...' before '<' token

       size_t vector_size, const std::function<void(size_t i, T *)> &filler) {

                                              ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: In member function 'flatbuffers::FlatBufferBuilder& flatbuffers::FlatBufferBuilder::operator=(flatbuffers::FlatBufferBuilder&&)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:969:33: error: 'move' is not a member of 'std'

     FlatBufferBuilder temp(std::move(other));

                                 ^~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:969:33: note: suggested alternative: 'remove'

     FlatBufferBuilder temp(std::move(other));

                                 ^~~~

                                 remove

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: In member function 'void flatbuffers::FlatBufferBuilder::AssertScalarT()':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1110:32: error: 'is_scalar' is not a member of 'flatbuffers'

     static_assert(flatbuffers::is_scalar<T>::value, "T must be a scalar type");

                                ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1110:32: note: suggested alternative: 'WriteScalar'

     static_assert(flatbuffers::is_scalar<T>::value, "T must be a scalar type");

                                ^~~~~~~~~

                                WriteScalar

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1110:43: error: expected primary-expression before '>' token

     static_assert(flatbuffers::is_scalar<T>::value, "T must be a scalar type");

                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1110:46: error: '::value' has not been declared

     static_assert(flatbuffers::is_scalar<T>::value, "T must be a scalar type");

                                              ^~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1110:46: note: suggested alternative: '_glue'

     static_assert(flatbuffers::is_scalar<T>::value, "T must be a scalar type");

                                              ^~~~~

                                              _glue

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: In member function 'flatbuffers::Offset<flatbuffers::Vector<T> > flatbuffers::FlatBufferBuilder::CreateVector(size_t, int)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:1504:57: error: there are no arguments to 'f' that depend on a template parameter, so a declaration of 'f' must be available [-fpermissive]

     for (size_t i = 0; i < vector_size; i++) elems[i] = f(i);

                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: In destructor 'flatbuffers::BufferRef<T>::~BufferRef()':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:2211:20: error: there are no arguments to 'free' that depend on a template parameter, so a declaration of 'free' must be available [-fpermissive]

     if (must_free) free(buf);

                    ^~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:2429:16: error: 'function' in namespace 'std' does not name a template type

   typedef std::function<void (void **pointer_adr, hash_value_t hash)>

                ^~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:2431:16: error: 'function' in namespace 'std' does not name a template type

   typedef std::function<hash_value_t (void *pointer)> rehasher_function_t;

                ^~~~~~~~

In file included from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:13:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:464:85: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   static void *UnPack(const void *obj, QuantizationDetails type, const flatbuffers::resolver_function_t *resolver);

                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:465:91: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   flatbuffers::Offset<void> Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher = nullptr) const;

                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In member function 'void tflite::QuantizationDetailsUnion::Set(T&&)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:455:30: error: 'remove_reference' in namespace 'std' does not name a template type

     using RT = typename std::remove_reference<T>::type;

                              ^~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:457:60: error: template argument 1 is invalid

     type = QuantizationDetailsTraits<typename RT::TableType>::enum_value;

                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:459:19: error: expected type-specifier before 'RT'

       value = new RT(std::forward<T>(val));

                   ^~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:459:19: error: expected ';' before 'RT'

In file included from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:13:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:1612:80: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   static void *UnPack(const void *obj, BuiltinOptions type, const flatbuffers::resolver_function_t *resolver);

                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:1613:91: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   flatbuffers::Offset<void> Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher = nullptr) const;

                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In member function 'void tflite::BuiltinOptionsUnion::Set(T&&)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:1603:30: error: 'remove_reference' in namespace 'std' does not name a template type

     using RT = typename std::remove_reference<T>::type;

                              ^~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:1605:55: error: template argument 1 is invalid

     type = BuiltinOptionsTraits<typename RT::TableType>::enum_value;

                                                       ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:1607:19: error: expected type-specifier before 'RT'

       value = new RT(std::forward<T>(val));

                   ^~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:1607:19: error: expected ';' before 'RT'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2672:50: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   CustomQuantizationT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2673:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(CustomQuantizationT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2674:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<CustomQuantization> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CustomQuantizationT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2712:154: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<CustomQuantization> CreateCustomQuantization(flatbuffers::FlatBufferBuilder &_fbb, const CustomQuantizationT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2779:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   QuantizationParametersT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2780:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(QuantizationParametersT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2781:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<QuantizationParameters> Pack(flatbuffers::FlatBufferBuilder &_fbb, const QuantizationParametersT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2868:166: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<QuantizationParameters> CreateQuantizationParameters(flatbuffers::FlatBufferBuilder &_fbb, const QuantizationParametersT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2876:8: error: 'unique_ptr' in namespace 'std' does not name a template type

   std::unique_ptr<QuantizationParametersT> quantization;

        ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2926:38: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   TensorT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2927:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(TensorT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2928:119: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<Tensor> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TensorT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3002:118: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<Tensor> CreateTensor(flatbuffers::FlatBufferBuilder &_fbb, const TensorT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3060:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   Conv2DOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3061:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(Conv2DOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3062:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<Conv2DOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Conv2DOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3116:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<Conv2DOptions> CreateConv2DOptions(flatbuffers::FlatBufferBuilder &_fbb, const Conv2DOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3174:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   Pool2DOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3175:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(Pool2DOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3176:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<Pool2DOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const Pool2DOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3230:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<Pool2DOptions> CreatePool2DOptions(flatbuffers::FlatBufferBuilder &_fbb, const Pool2DOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3295:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   DepthwiseConv2DOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3296:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(DepthwiseConv2DOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3297:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<DepthwiseConv2DOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DepthwiseConv2DOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3356:166: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<DepthwiseConv2DOptions> CreateDepthwiseConv2DOptions(flatbuffers::FlatBufferBuilder &_fbb, const DepthwiseConv2DOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3393:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ConcatEmbeddingsOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3394:66: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ConcatEmbeddingsOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3395:153: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ConcatEmbeddingsOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ConcatEmbeddingsOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3448:169: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ConcatEmbeddingsOptions> CreateConcatEmbeddingsOptions(flatbuffers::FlatBufferBuilder &_fbb, const ConcatEmbeddingsOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3471:52: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LSHProjectionOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3472:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LSHProjectionOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3473:147: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LSHProjectionOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LSHProjectionOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3502:160: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LSHProjectionOptions> CreateLSHProjectionOptions(flatbuffers::FlatBufferBuilder &_fbb, const LSHProjectionOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3532:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SVDFOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3533:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SVDFOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3534:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SVDFOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SVDFOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3568:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SVDFOptions> CreateSVDFOptions(flatbuffers::FlatBufferBuilder &_fbb, const SVDFOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3591:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   RNNOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3592:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(RNNOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3593:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<RNNOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const RNNOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3622:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<RNNOptions> CreateRNNOptions(flatbuffers::FlatBufferBuilder &_fbb, const RNNOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3652:50: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SequenceRNNOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3653:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SequenceRNNOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3654:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SequenceRNNOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SequenceRNNOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3688:154: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SequenceRNNOptions> CreateSequenceRNNOptions(flatbuffers::FlatBufferBuilder &_fbb, const SequenceRNNOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3725:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   BidirectionalSequenceRNNOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3726:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(BidirectionalSequenceRNNOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3727:169: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<BidirectionalSequenceRNNOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const BidirectionalSequenceRNNOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3766:193: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<BidirectionalSequenceRNNOptions> CreateBidirectionalSequenceRNNOptions(flatbuffers::FlatBufferBuilder &_fbb, const BidirectionalSequenceRNNOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3803:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   FullyConnectedOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3804:64: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(FullyConnectedOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3805:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<FullyConnectedOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const FullyConnectedOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3844:163: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<FullyConnectedOptions> CreateFullyConnectedOptions(flatbuffers::FlatBufferBuilder &_fbb, const FullyConnectedOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3867:46: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SoftmaxOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3868:57: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SoftmaxOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3869:135: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SoftmaxOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SoftmaxOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3898:142: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SoftmaxOptions> CreateSoftmaxOptions(flatbuffers::FlatBufferBuilder &_fbb, const SoftmaxOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3928:52: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ConcatenationOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3929:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ConcatenationOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3930:147: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ConcatenationOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ConcatenationOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3964:160: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ConcatenationOptions> CreateConcatenationOptions(flatbuffers::FlatBufferBuilder &_fbb, const ConcatenationOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3987:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   AddOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3988:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(AddOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:3989:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<AddOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const AddOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4018:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<AddOptions> CreateAddOptions(flatbuffers::FlatBufferBuilder &_fbb, const AddOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4041:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   MulOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4042:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(MulOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4043:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<MulOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const MulOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4072:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<MulOptions> CreateMulOptions(flatbuffers::FlatBufferBuilder &_fbb, const MulOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4095:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   L2NormOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4096:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(L2NormOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4097:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<L2NormOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const L2NormOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4126:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<L2NormOptions> CreateL2NormOptions(flatbuffers::FlatBufferBuilder &_fbb, const L2NormOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4170:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LocalResponseNormalizationOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4171:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LocalResponseNormalizationOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4172:173: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LocalResponseNormalizationOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LocalResponseNormalizationOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4216:199: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LocalResponseNormalizationOptions> CreateLocalResponseNormalizationOptions(flatbuffers::FlatBufferBuilder &_fbb, const LocalResponseNormalizationOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4260:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LSTMOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4261:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LSTMOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4262:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LSTMOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LSTMOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4306:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LSTMOptions> CreateLSTMOptions(flatbuffers::FlatBufferBuilder &_fbb, const LSTMOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4350:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   UnidirectionalSequenceLSTMOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4351:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(UnidirectionalSequenceLSTMOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4352:173: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<UnidirectionalSequenceLSTMOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const UnidirectionalSequenceLSTMOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4396:199: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<UnidirectionalSequenceLSTMOptions> CreateUnidirectionalSequenceLSTMOptions(flatbuffers::FlatBufferBuilder &_fbb, const UnidirectionalSequenceLSTMOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4447:64: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   BidirectionalSequenceLSTMOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4448:75: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(BidirectionalSequenceLSTMOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4449:171: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<BidirectionalSequenceLSTMOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const BidirectionalSequenceLSTMOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4498:196: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<BidirectionalSequenceLSTMOptions> CreateBidirectionalSequenceLSTMOptions(flatbuffers::FlatBufferBuilder &_fbb, const BidirectionalSequenceLSTMOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4521:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ResizeBilinearOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4522:64: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ResizeBilinearOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4523:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ResizeBilinearOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ResizeBilinearOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4552:163: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ResizeBilinearOptions> CreateResizeBilinearOptions(flatbuffers::FlatBufferBuilder &_fbb, const ResizeBilinearOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4575:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ResizeNearestNeighborOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4576:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ResizeNearestNeighborOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4577:163: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ResizeNearestNeighborOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ResizeNearestNeighborOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4606:184: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ResizeNearestNeighborOptions> CreateResizeNearestNeighborOptions(flatbuffers::FlatBufferBuilder &_fbb, const ResizeNearestNeighborOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4629:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   CallOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4630:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(CallOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4631:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<CallOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CallOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4660:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<CallOptions> CreateCallOptions(flatbuffers::FlatBufferBuilder &_fbb, const CallOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4674:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   PadOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4675:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(PadOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4676:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<PadOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PadOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4700:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<PadOptions> CreatePadOptions(flatbuffers::FlatBufferBuilder &_fbb, const PadOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4714:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   PadV2OptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4715:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(PadV2OptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4716:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<PadV2Options> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PadV2OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4740:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<PadV2Options> CreatePadV2Options(flatbuffers::FlatBufferBuilder &_fbb, const PadV2OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4763:46: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ReshapeOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4764:57: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ReshapeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4765:135: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ReshapeOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ReshapeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4803:142: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ReshapeOptions> CreateReshapeOptions(flatbuffers::FlatBufferBuilder &_fbb, const ReshapeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4817:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SpaceToBatchNDOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4818:64: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SpaceToBatchNDOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4819:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SpaceToBatchNDOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SpaceToBatchNDOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4843:163: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SpaceToBatchNDOptions> CreateSpaceToBatchNDOptions(flatbuffers::FlatBufferBuilder &_fbb, const SpaceToBatchNDOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4857:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   BatchToSpaceNDOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4858:64: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(BatchToSpaceNDOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4859:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<BatchToSpaceNDOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const BatchToSpaceNDOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4883:163: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<BatchToSpaceNDOptions> CreateBatchToSpaceNDOptions(flatbuffers::FlatBufferBuilder &_fbb, const BatchToSpaceNDOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4920:47: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SkipGramOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4921:58: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SkipGramOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4922:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SkipGramOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SkipGramOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4961:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SkipGramOptions> CreateSkipGramOptions(flatbuffers::FlatBufferBuilder &_fbb, const SkipGramOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4984:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SpaceToDepthOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4985:62: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SpaceToDepthOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:4986:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SpaceToDepthOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SpaceToDepthOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5015:157: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SpaceToDepthOptions> CreateSpaceToDepthOptions(flatbuffers::FlatBufferBuilder &_fbb, const SpaceToDepthOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5038:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   DepthToSpaceOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5039:62: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(DepthToSpaceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5040:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<DepthToSpaceOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DepthToSpaceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5069:157: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<DepthToSpaceOptions> CreateDepthToSpaceOptions(flatbuffers::FlatBufferBuilder &_fbb, const DepthToSpaceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5092:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SubOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5093:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SubOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5094:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SubOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SubOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5123:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SubOptions> CreateSubOptions(flatbuffers::FlatBufferBuilder &_fbb, const SubOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5146:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   DivOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5147:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(DivOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5148:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<DivOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DivOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5177:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<DivOptions> CreateDivOptions(flatbuffers::FlatBufferBuilder &_fbb, const DivOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5191:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   TopKV2OptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5192:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(TopKV2OptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5193:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<TopKV2Options> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TopKV2OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5217:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<TopKV2Options> CreateTopKV2Options(flatbuffers::FlatBufferBuilder &_fbb, const TopKV2OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5240:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   EmbeddingLookupSparseOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5241:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(EmbeddingLookupSparseOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5242:163: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<EmbeddingLookupSparseOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const EmbeddingLookupSparseOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5271:184: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<EmbeddingLookupSparseOptions> CreateEmbeddingLookupSparseOptions(flatbuffers::FlatBufferBuilder &_fbb, const EmbeddingLookupSparseOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5294:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   GatherOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5295:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(GatherOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5296:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<GatherOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const GatherOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5325:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<GatherOptions> CreateGatherOptions(flatbuffers::FlatBufferBuilder &_fbb, const GatherOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5339:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   TransposeOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5340:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(TransposeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5341:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<TransposeOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TransposeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5365:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<TransposeOptions> CreateTransposeOptions(flatbuffers::FlatBufferBuilder &_fbb, const TransposeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5379:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ExpOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5380:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ExpOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5381:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ExpOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ExpOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5405:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ExpOptions> CreateExpOptions(flatbuffers::FlatBufferBuilder &_fbb, const ExpOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5419:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   CosOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5420:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(CosOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5421:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<CosOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CosOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5445:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<CosOptions> CreateCosOptions(flatbuffers::FlatBufferBuilder &_fbb, const CosOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5468:46: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ReducerOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5469:57: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ReducerOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5470:135: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ReducerOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ReducerOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5499:142: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ReducerOptions> CreateReducerOptions(flatbuffers::FlatBufferBuilder &_fbb, const ReducerOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5522:46: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SqueezeOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5523:57: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SqueezeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5524:135: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SqueezeOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SqueezeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5562:142: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SqueezeOptions> CreateSqueezeOptions(flatbuffers::FlatBufferBuilder &_fbb, const SqueezeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5585:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SplitOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5586:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SplitOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5587:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SplitOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SplitOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5616:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SplitOptions> CreateSplitOptions(flatbuffers::FlatBufferBuilder &_fbb, const SplitOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5639:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SplitVOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5640:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SplitVOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5641:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SplitVOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SplitVOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5670:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SplitVOptions> CreateSplitVOptions(flatbuffers::FlatBufferBuilder &_fbb, const SplitVOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5721:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   StridedSliceOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5722:62: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(StridedSliceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5723:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<StridedSliceOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const StridedSliceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5772:157: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<StridedSliceOptions> CreateStridedSliceOptions(flatbuffers::FlatBufferBuilder &_fbb, const StridedSliceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5786:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LogSoftmaxOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5787:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LogSoftmaxOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5788:141: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LogSoftmaxOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LogSoftmaxOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5812:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LogSoftmaxOptions> CreateLogSoftmaxOptions(flatbuffers::FlatBufferBuilder &_fbb, const LogSoftmaxOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5842:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   CastOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5843:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(CastOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5844:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<CastOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const CastOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5878:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<CastOptions> CreateCastOptions(flatbuffers::FlatBufferBuilder &_fbb, const CastOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5892:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   DequantizeOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5893:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(DequantizeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5894:141: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<DequantizeOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const DequantizeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5918:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<DequantizeOptions> CreateDequantizeOptions(flatbuffers::FlatBufferBuilder &_fbb, const DequantizeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5932:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   MaximumMinimumOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5933:64: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(MaximumMinimumOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5934:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<MaximumMinimumOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const MaximumMinimumOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5958:163: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<MaximumMinimumOptions> CreateMaximumMinimumOptions(flatbuffers::FlatBufferBuilder &_fbb, const MaximumMinimumOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5972:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   TileOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5973:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(TileOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5974:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<TileOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TileOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:5998:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<TileOptions> CreateTileOptions(flatbuffers::FlatBufferBuilder &_fbb, const TileOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6021:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ArgMaxOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6022:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ArgMaxOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6023:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ArgMaxOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ArgMaxOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6052:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ArgMaxOptions> CreateArgMaxOptions(flatbuffers::FlatBufferBuilder &_fbb, const ArgMaxOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6075:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ArgMinOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6076:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ArgMinOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6077:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ArgMinOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ArgMinOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6106:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ArgMinOptions> CreateArgMinOptions(flatbuffers::FlatBufferBuilder &_fbb, const ArgMinOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6120:46: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   GreaterOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6121:57: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(GreaterOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6122:135: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<GreaterOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const GreaterOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6146:142: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<GreaterOptions> CreateGreaterOptions(flatbuffers::FlatBufferBuilder &_fbb, const GreaterOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6160:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   GreaterEqualOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6161:62: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(GreaterEqualOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6162:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<GreaterEqualOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const GreaterEqualOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6186:157: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<GreaterEqualOptions> CreateGreaterEqualOptions(flatbuffers::FlatBufferBuilder &_fbb, const GreaterEqualOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6200:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LessOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6201:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LessOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6202:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LessOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LessOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6226:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LessOptions> CreateLessOptions(flatbuffers::FlatBufferBuilder &_fbb, const LessOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6240:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LessEqualOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6241:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LessEqualOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6242:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LessEqualOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LessEqualOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6266:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LessEqualOptions> CreateLessEqualOptions(flatbuffers::FlatBufferBuilder &_fbb, const LessEqualOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6280:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   NegOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6281:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(NegOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6282:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<NegOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const NegOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6306:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<NegOptions> CreateNegOptions(flatbuffers::FlatBufferBuilder &_fbb, const NegOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6320:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SelectOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6321:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SelectOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6322:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SelectOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SelectOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6346:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SelectOptions> CreateSelectOptions(flatbuffers::FlatBufferBuilder &_fbb, const SelectOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6360:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SliceOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6361:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SliceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6362:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SliceOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SliceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6386:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SliceOptions> CreateSliceOptions(flatbuffers::FlatBufferBuilder &_fbb, const SliceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6423:52: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   TransposeConvOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6424:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(TransposeConvOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6425:147: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<TransposeConvOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const TransposeConvOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6464:160: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<TransposeConvOptions> CreateTransposeConvOptions(flatbuffers::FlatBufferBuilder &_fbb, const TransposeConvOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6478:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ExpandDimsOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6479:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ExpandDimsOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6480:141: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ExpandDimsOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ExpandDimsOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6504:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ExpandDimsOptions> CreateExpandDimsOptions(flatbuffers::FlatBufferBuilder &_fbb, const ExpandDimsOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6527:52: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SparseToDenseOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6528:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SparseToDenseOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6529:147: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SparseToDenseOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SparseToDenseOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6558:160: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SparseToDenseOptions> CreateSparseToDenseOptions(flatbuffers::FlatBufferBuilder &_fbb, const SparseToDenseOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6572:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   EqualOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6573:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(EqualOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6574:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<EqualOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const EqualOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6598:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<EqualOptions> CreateEqualOptions(flatbuffers::FlatBufferBuilder &_fbb, const EqualOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6612:47: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   NotEqualOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6613:58: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(NotEqualOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6614:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<NotEqualOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const NotEqualOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6638:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<NotEqualOptions> CreateNotEqualOptions(flatbuffers::FlatBufferBuilder &_fbb, const NotEqualOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6661:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ShapeOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6662:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ShapeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6663:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ShapeOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ShapeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6692:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ShapeOptions> CreateShapeOptions(flatbuffers::FlatBufferBuilder &_fbb, const ShapeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6706:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   RankOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6707:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(RankOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6708:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<RankOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const RankOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6732:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<RankOptions> CreateRankOptions(flatbuffers::FlatBufferBuilder &_fbb, const RankOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6746:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   PowOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6747:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(PowOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6748:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<PowOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PowOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6772:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<PowOptions> CreatePowOptions(flatbuffers::FlatBufferBuilder &_fbb, const PowOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6816:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   FakeQuantOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6817:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(FakeQuantOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6818:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<FakeQuantOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const FakeQuantOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6862:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<FakeQuantOptions> CreateFakeQuantOptions(flatbuffers::FlatBufferBuilder &_fbb, const FakeQuantOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6892:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   PackOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6893:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(PackOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6894:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<PackOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const PackOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6928:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<PackOptions> CreatePackOptions(flatbuffers::FlatBufferBuilder &_fbb, const PackOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6942:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LogicalOrOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6943:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LogicalOrOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6944:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LogicalOrOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LogicalOrOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6968:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LogicalOrOptions> CreateLogicalOrOptions(flatbuffers::FlatBufferBuilder &_fbb, const LogicalOrOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6991:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   OneHotOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6992:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(OneHotOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6993:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<OneHotOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const OneHotOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7022:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<OneHotOptions> CreateOneHotOptions(flatbuffers::FlatBufferBuilder &_fbb, const OneHotOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7036:42: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   AbsOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7037:53: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(AbsOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7038:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<AbsOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const AbsOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7062:130: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<AbsOptions> CreateAbsOptions(flatbuffers::FlatBufferBuilder &_fbb, const AbsOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7076:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   HardSwishOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7077:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(HardSwishOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7078:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<HardSwishOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const HardSwishOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7102:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<HardSwishOptions> CreateHardSwishOptions(flatbuffers::FlatBufferBuilder &_fbb, const HardSwishOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7116:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LogicalAndOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7117:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LogicalAndOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7118:141: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LogicalAndOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LogicalAndOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7142:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LogicalAndOptions> CreateLogicalAndOptions(flatbuffers::FlatBufferBuilder &_fbb, const LogicalAndOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7156:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LogicalNotOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7157:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LogicalNotOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7158:141: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LogicalNotOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LogicalNotOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7182:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LogicalNotOptions> CreateLogicalNotOptions(flatbuffers::FlatBufferBuilder &_fbb, const LogicalNotOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7212:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   UnpackOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7213:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(UnpackOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7214:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<UnpackOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const UnpackOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7248:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<UnpackOptions> CreateUnpackOptions(flatbuffers::FlatBufferBuilder &_fbb, const UnpackOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7262:47: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   FloorDivOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7263:58: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(FloorDivOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7264:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<FloorDivOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const FloorDivOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7288:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<FloorDivOptions> CreateFloorDivOptions(flatbuffers::FlatBufferBuilder &_fbb, const FloorDivOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7302:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SquareOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7303:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SquareOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7304:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SquareOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SquareOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7328:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SquareOptions> CreateSquareOptions(flatbuffers::FlatBufferBuilder &_fbb, const SquareOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7342:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ZerosLikeOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7343:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ZerosLikeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7344:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ZerosLikeOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ZerosLikeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7368:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ZerosLikeOptions> CreateZerosLikeOptions(flatbuffers::FlatBufferBuilder &_fbb, const ZerosLikeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7382:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   FillOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7383:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(FillOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7384:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<FillOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const FillOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7408:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<FillOptions> CreateFillOptions(flatbuffers::FlatBufferBuilder &_fbb, const FillOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7422:47: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   FloorModOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7423:58: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(FloorModOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7424:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<FloorModOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const FloorModOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7448:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<FloorModOptions> CreateFloorModOptions(flatbuffers::FlatBufferBuilder &_fbb, const FloorModOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7462:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   RangeOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7463:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(RangeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7464:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<RangeOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const RangeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7488:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<RangeOptions> CreateRangeOptions(flatbuffers::FlatBufferBuilder &_fbb, const RangeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7511:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   LeakyReluOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7512:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(LeakyReluOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7513:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<LeakyReluOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const LeakyReluOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7542:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<LeakyReluOptions> CreateLeakyReluOptions(flatbuffers::FlatBufferBuilder &_fbb, const LeakyReluOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7556:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SquaredDifferenceOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7557:67: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SquaredDifferenceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7558:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SquaredDifferenceOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SquaredDifferenceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7582:172: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SquaredDifferenceOptions> CreateSquaredDifferenceOptions(flatbuffers::FlatBufferBuilder &_fbb, const SquaredDifferenceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7605:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   MirrorPadOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7606:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(MirrorPadOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7607:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<MirrorPadOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const MirrorPadOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7636:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<MirrorPadOptions> CreateMirrorPadOptions(flatbuffers::FlatBufferBuilder &_fbb, const MirrorPadOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7659:45: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   UniqueOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7660:56: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(UniqueOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7661:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<UniqueOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const UniqueOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7690:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<UniqueOptions> CreateUniqueOptions(flatbuffers::FlatBufferBuilder &_fbb, const UniqueOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7704:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ReverseV2OptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7705:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ReverseV2OptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7706:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ReverseV2Options> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ReverseV2OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7730:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ReverseV2Options> CreateReverseV2Options(flatbuffers::FlatBufferBuilder &_fbb, const ReverseV2OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7744:43: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   AddNOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7745:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(AddNOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7746:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<AddNOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const AddNOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7770:133: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<AddNOptions> CreateAddNOptions(flatbuffers::FlatBufferBuilder &_fbb, const AddNOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7784:47: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   GatherNdOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7785:58: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(GatherNdOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7786:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<GatherNdOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const GatherNdOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7810:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<GatherNdOptions> CreateGatherNdOptions(flatbuffers::FlatBufferBuilder &_fbb, const GatherNdOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7824:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   WhereOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7825:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(WhereOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7826:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<WhereOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const WhereOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7850:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<WhereOptions> CreateWhereOptions(flatbuffers::FlatBufferBuilder &_fbb, const WhereOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7880:54: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ReverseSequenceOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7881:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ReverseSequenceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7882:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ReverseSequenceOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ReverseSequenceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7916:166: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ReverseSequenceOptions> CreateReverseSequenceOptions(flatbuffers::FlatBufferBuilder &_fbb, const ReverseSequenceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7930:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   MatrixDiagOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7931:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(MatrixDiagOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7932:141: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<MatrixDiagOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const MatrixDiagOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7956:151: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<MatrixDiagOptions> CreateMatrixDiagOptions(flatbuffers::FlatBufferBuilder &_fbb, const MatrixDiagOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7970:47: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   QuantizeOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7971:58: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(QuantizeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7972:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<QuantizeOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const QuantizeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:7996:145: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<QuantizeOptions> CreateQuantizeOptions(flatbuffers::FlatBufferBuilder &_fbb, const QuantizeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8010:52: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   MatrixSetDiagOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8011:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(MatrixSetDiagOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8012:147: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<MatrixSetDiagOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const MatrixSetDiagOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8036:160: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<MatrixSetDiagOptions> CreateMatrixSetDiagOptions(flatbuffers::FlatBufferBuilder &_fbb, const MatrixSetDiagOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8066:41: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   IfOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8067:52: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(IfOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8068:125: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<IfOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const IfOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8102:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<IfOptions> CreateIfOptions(flatbuffers::FlatBufferBuilder &_fbb, const IfOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8132:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   WhileOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8133:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(WhileOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8134:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<WhileOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const WhileOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8168:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<WhileOptions> CreateWhileOptions(flatbuffers::FlatBufferBuilder &_fbb, const WhileOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8182:58: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   NonMaxSuppressionV4OptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8183:69: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(NonMaxSuppressionV4OptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8184:159: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<NonMaxSuppressionV4Options> Pack(flatbuffers::FlatBufferBuilder &_fbb, const NonMaxSuppressionV4OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8208:178: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<NonMaxSuppressionV4Options> CreateNonMaxSuppressionV4Options(flatbuffers::FlatBufferBuilder &_fbb, const NonMaxSuppressionV4OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8222:58: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   NonMaxSuppressionV5OptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8223:69: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(NonMaxSuppressionV5OptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8224:159: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<NonMaxSuppressionV5Options> Pack(flatbuffers::FlatBufferBuilder &_fbb, const NonMaxSuppressionV5OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8248:178: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<NonMaxSuppressionV5Options> CreateNonMaxSuppressionV5Options(flatbuffers::FlatBufferBuilder &_fbb, const NonMaxSuppressionV5OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8262:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ScatterNdOptionsT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8263:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ScatterNdOptionsT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8264:139: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<ScatterNdOptions> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ScatterNdOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8288:148: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<ScatterNdOptions> CreateScatterNdOptions(flatbuffers::FlatBufferBuilder &_fbb, const ScatterNdOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8325:44: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   OperatorCodeT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8326:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(OperatorCodeT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8327:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<OperatorCode> Pack(flatbuffers::FlatBufferBuilder &_fbb, const OperatorCodeT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8379:136: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<OperatorCode> CreateOperatorCode(flatbuffers::FlatBufferBuilder &_fbb, const OperatorCodeT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8748:40: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   OperatorT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8749:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(OperatorT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:8750:123: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<Operator> Pack(flatbuffers::FlatBufferBuilder &_fbb, const OperatorT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9236:124: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<Operator> CreateOperator(flatbuffers::FlatBufferBuilder &_fbb, const OperatorT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9240:20: error: 'unique_ptr' is not a member of 'std'

   std::vector<std::unique_ptr<TensorT>> tensors;

                    ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9240:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<TensorT>> tensors;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9240:20: error: 'unique_ptr' is not a member of 'std'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9240:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<TensorT>> tensors;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9240:31: error: template argument 1 is invalid

   std::vector<std::unique_ptr<TensorT>> tensors;

                               ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9240:31: error: template argument 2 is invalid

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9240:38: error: expected unqualified-id before '>' token

   std::vector<std::unique_ptr<TensorT>> tensors;

                                      ^~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9243:20: error: 'unique_ptr' is not a member of 'std'

   std::vector<std::unique_ptr<OperatorT>> operators;

                    ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9243:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<OperatorT>> operators;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9243:20: error: 'unique_ptr' is not a member of 'std'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9243:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<OperatorT>> operators;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9243:31: error: template argument 1 is invalid

   std::vector<std::unique_ptr<OperatorT>> operators;

                               ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9243:31: error: template argument 2 is invalid

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9243:40: error: expected unqualified-id before '>' token

   std::vector<std::unique_ptr<OperatorT>> operators;

                                        ^~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9289:40: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   SubGraphT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9290:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(SubGraphT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9291:123: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<SubGraph> Pack(flatbuffers::FlatBufferBuilder &_fbb, const SubGraphT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9361:124: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<SubGraph> CreateSubGraph(flatbuffers::FlatBufferBuilder &_fbb, const SubGraphT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9384:38: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   BufferT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9385:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(BufferT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9386:119: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<Buffer> Pack(flatbuffers::FlatBufferBuilder &_fbb, const BufferT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9424:118: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<Buffer> CreateBuffer(flatbuffers::FlatBufferBuilder &_fbb, const BufferT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9454:40: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   MetadataT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9455:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(MetadataT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9456:123: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<Metadata> Pack(flatbuffers::FlatBufferBuilder &_fbb, const MetadataT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9501:124: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<Metadata> CreateMetadata(flatbuffers::FlatBufferBuilder &_fbb, const MetadataT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9506:20: error: 'unique_ptr' is not a member of 'std'

   std::vector<std::unique_ptr<OperatorCodeT>> operator_codes;

                    ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9506:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<OperatorCodeT>> operator_codes;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9506:20: error: 'unique_ptr' is not a member of 'std'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9506:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<OperatorCodeT>> operator_codes;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9506:31: error: template argument 1 is invalid

   std::vector<std::unique_ptr<OperatorCodeT>> operator_codes;

                               ^~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9506:31: error: template argument 2 is invalid

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9506:44: error: expected unqualified-id before '>' token

   std::vector<std::unique_ptr<OperatorCodeT>> operator_codes;

                                            ^~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9507:20: error: 'unique_ptr' is not a member of 'std'

   std::vector<std::unique_ptr<SubGraphT>> subgraphs;

                    ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9507:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<SubGraphT>> subgraphs;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9507:20: error: 'unique_ptr' is not a member of 'std'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9507:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<SubGraphT>> subgraphs;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9507:31: error: template argument 1 is invalid

   std::vector<std::unique_ptr<SubGraphT>> subgraphs;

                               ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9507:31: error: template argument 2 is invalid

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9507:40: error: expected unqualified-id before '>' token

   std::vector<std::unique_ptr<SubGraphT>> subgraphs;

                                        ^~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9509:20: error: 'unique_ptr' is not a member of 'std'

   std::vector<std::unique_ptr<BufferT>> buffers;

                    ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9509:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<BufferT>> buffers;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9509:20: error: 'unique_ptr' is not a member of 'std'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9509:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<BufferT>> buffers;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9509:31: error: template argument 1 is invalid

   std::vector<std::unique_ptr<BufferT>> buffers;

                               ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9509:31: error: template argument 2 is invalid

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9509:38: error: expected unqualified-id before '>' token

   std::vector<std::unique_ptr<BufferT>> buffers;

                                      ^~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9511:20: error: 'unique_ptr' is not a member of 'std'

   std::vector<std::unique_ptr<MetadataT>> metadata;

                    ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9511:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<MetadataT>> metadata;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9511:20: error: 'unique_ptr' is not a member of 'std'

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9511:20: note: suggested alternative: 'unique_copy'

   std::vector<std::unique_ptr<MetadataT>> metadata;

                    ^~~~~~~~~~

                    unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9511:31: error: template argument 1 is invalid

   std::vector<std::unique_ptr<MetadataT>> metadata;

                               ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9511:31: error: template argument 2 is invalid

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9511:40: error: expected unqualified-id before '>' token

   std::vector<std::unique_ptr<MetadataT>> metadata;

                                        ^~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9570:37: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   ModelT *UnPack(const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9571:48: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

   void UnPackTo(ModelT *_o, const flatbuffers::resolver_function_t *_resolver = nullptr) const;

                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9572:117: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   static flatbuffers::Offset<Model> Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelT* _o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9657:115: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 flatbuffers::Offset<Model> CreateModel(flatbuffers::FlatBufferBuilder &_fbb, const ModelT *_o, const flatbuffers::rehasher_function_t *_rehasher = nullptr);

                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9659:75: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline CustomQuantizationT *CustomQuantization::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9665:86: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void CustomQuantization::UnPackTo(CustomQuantizationT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9671:161: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<CustomQuantization> CustomQuantization::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CustomQuantizationT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9675:161: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<CustomQuantization> CreateCustomQuantization(flatbuffers::FlatBufferBuilder &_fbb, const CustomQuantizationT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::CustomQuantization> tflite::CreateCustomQuantization(flatbuffers::FlatBufferBuilder&, const tflite::CustomQuantizationT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9678:114: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CustomQuantizationT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9678:177: error: too many initializers for 'tflite::CreateCustomQuantization(flatbuffers::FlatBufferBuilder&, const tflite::CustomQuantizationT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CustomQuantizationT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                 ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9685:83: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline QuantizationParametersT *QuantizationParameters::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9691:94: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void QuantizationParameters::UnPackTo(QuantizationParametersT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9703:173: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<QuantizationParameters> QuantizationParameters::Pack(flatbuffers::FlatBufferBuilder &_fbb, const QuantizationParametersT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9707:173: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<QuantizationParameters> CreateQuantizationParameters(flatbuffers::FlatBufferBuilder &_fbb, const QuantizationParametersT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::QuantizationParameters> tflite::CreateQuantizationParameters(flatbuffers::FlatBufferBuilder&, const tflite::QuantizationParametersT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9710:118: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const QuantizationParametersT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9710:181: error: too many initializers for 'tflite::CreateQuantizationParameters(flatbuffers::FlatBufferBuilder&, const tflite::QuantizationParametersT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const QuantizationParametersT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                     ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9729:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline TensorT *Tensor::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9735:62: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void Tensor::UnPackTo(TensorT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In member function 'void tflite::Tensor::UnPackTo(tflite::TensorT*, const int*) const':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9742:43: error: 'struct tflite::TensorT' has no member named 'quantization'

   { auto _e = quantization(); if (_e) _o->quantization = std::unique_ptr<QuantizationParametersT>(_e->UnPack(_resolver)); };

                                           ^~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9742:63: error: 'unique_ptr' is not a member of 'std'

   { auto _e = quantization(); if (_e) _o->quantization = std::unique_ptr<QuantizationParametersT>(_e->UnPack(_resolver)); };

                                                               ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9742:63: note: suggested alternative: 'unique_copy'

   { auto _e = quantization(); if (_e) _o->quantization = std::unique_ptr<QuantizationParametersT>(_e->UnPack(_resolver)); };

                                                               ^~~~~~~~~~

                                                               unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9742:97: error: expected primary-expression before '>' token

   { auto _e = quantization(); if (_e) _o->quantization = std::unique_ptr<QuantizationParametersT>(_e->UnPack(_resolver)); };

                                                                                                 ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9746:125: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Tensor> Tensor::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TensorT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9750:125: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Tensor> CreateTensor(flatbuffers::FlatBufferBuilder &_fbb, const TensorT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Tensor> tflite::CreateTensor(flatbuffers::FlatBufferBuilder&, const tflite::TensorT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9753:102: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TensorT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9753:165: error: too many initializers for 'tflite::CreateTensor(flatbuffers::FlatBufferBuilder&, const tflite::TensorT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TensorT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                     ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9758:28: error: 'const struct tflite::TensorT' has no member named 'quantization'

   auto _quantization = _o->quantization ? CreateQuantizationParameters(_fbb, _o->quantization.get(), _rehasher) : 0;

                            ^~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9758:82: error: 'const struct tflite::TensorT' has no member named 'quantization'

   auto _quantization = _o->quantization ? CreateQuantizationParameters(_fbb, _o->quantization.get(), _rehasher) : 0;

                                                                                  ^~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9770:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline Conv2DOptionsT *Conv2DOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9776:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void Conv2DOptions::UnPackTo(Conv2DOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9787:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Conv2DOptions> Conv2DOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const Conv2DOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9791:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Conv2DOptions> CreateConv2DOptions(flatbuffers::FlatBufferBuilder &_fbb, const Conv2DOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Conv2DOptions> tflite::CreateConv2DOptions(flatbuffers::FlatBufferBuilder&, const tflite::Conv2DOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9794:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Conv2DOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9794:172: error: too many initializers for 'tflite::CreateConv2DOptions(flatbuffers::FlatBufferBuilder&, const tflite::Conv2DOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Conv2DOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9811:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline Pool2DOptionsT *Pool2DOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9817:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void Pool2DOptions::UnPackTo(Pool2DOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9828:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Pool2DOptions> Pool2DOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const Pool2DOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9832:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Pool2DOptions> CreatePool2DOptions(flatbuffers::FlatBufferBuilder &_fbb, const Pool2DOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Pool2DOptions> tflite::CreatePool2DOptions(flatbuffers::FlatBufferBuilder&, const tflite::Pool2DOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9835:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Pool2DOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9835:172: error: too many initializers for 'tflite::CreatePool2DOptions(flatbuffers::FlatBufferBuilder&, const tflite::Pool2DOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const Pool2DOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9852:83: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline DepthwiseConv2DOptionsT *DepthwiseConv2DOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9858:94: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void DepthwiseConv2DOptions::UnPackTo(DepthwiseConv2DOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9870:173: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<DepthwiseConv2DOptions> DepthwiseConv2DOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DepthwiseConv2DOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9874:173: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<DepthwiseConv2DOptions> CreateDepthwiseConv2DOptions(flatbuffers::FlatBufferBuilder &_fbb, const DepthwiseConv2DOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::DepthwiseConv2DOptions> tflite::CreateDepthwiseConv2DOptions(flatbuffers::FlatBufferBuilder&, const tflite::DepthwiseConv2DOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9877:118: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DepthwiseConv2DOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9877:181: error: too many initializers for 'tflite::CreateDepthwiseConv2DOptions(flatbuffers::FlatBufferBuilder&, const tflite::DepthwiseConv2DOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DepthwiseConv2DOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                     ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9896:85: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ConcatEmbeddingsOptionsT *ConcatEmbeddingsOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9902:96: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ConcatEmbeddingsOptions::UnPackTo(ConcatEmbeddingsOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9910:176: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ConcatEmbeddingsOptions> ConcatEmbeddingsOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ConcatEmbeddingsOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9914:176: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ConcatEmbeddingsOptions> CreateConcatEmbeddingsOptions(flatbuffers::FlatBufferBuilder &_fbb, const ConcatEmbeddingsOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ConcatEmbeddingsOptions> tflite::CreateConcatEmbeddingsOptions(flatbuffers::FlatBufferBuilder&, const tflite::ConcatEmbeddingsOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9917:119: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ConcatEmbeddingsOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9917:182: error: too many initializers for 'tflite::CreateConcatEmbeddingsOptions(flatbuffers::FlatBufferBuilder&, const tflite::ConcatEmbeddingsOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ConcatEmbeddingsOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                      ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9928:79: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LSHProjectionOptionsT *LSHProjectionOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9934:90: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LSHProjectionOptions::UnPackTo(LSHProjectionOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9940:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LSHProjectionOptions> LSHProjectionOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LSHProjectionOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9944:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LSHProjectionOptions> CreateLSHProjectionOptions(flatbuffers::FlatBufferBuilder &_fbb, const LSHProjectionOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LSHProjectionOptions> tflite::CreateLSHProjectionOptions(flatbuffers::FlatBufferBuilder&, const tflite::LSHProjectionOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9947:116: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LSHProjectionOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9947:179: error: too many initializers for 'tflite::CreateLSHProjectionOptions(flatbuffers::FlatBufferBuilder&, const tflite::LSHProjectionOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LSHProjectionOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                   ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9954:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SVDFOptionsT *SVDFOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9960:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SVDFOptions::UnPackTo(SVDFOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9967:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SVDFOptions> SVDFOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SVDFOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9971:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SVDFOptions> CreateSVDFOptions(flatbuffers::FlatBufferBuilder &_fbb, const SVDFOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SVDFOptions> tflite::CreateSVDFOptions(flatbuffers::FlatBufferBuilder&, const tflite::SVDFOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9974:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SVDFOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9974:170: error: too many initializers for 'tflite::CreateSVDFOptions(flatbuffers::FlatBufferBuilder&, const tflite::SVDFOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SVDFOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9983:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline RNNOptionsT *RNNOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9989:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void RNNOptions::UnPackTo(RNNOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9995:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<RNNOptions> RNNOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const RNNOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9999:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<RNNOptions> CreateRNNOptions(flatbuffers::FlatBufferBuilder &_fbb, const RNNOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::RNNOptions> tflite::CreateRNNOptions(flatbuffers::FlatBufferBuilder&, const tflite::RNNOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10002:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const RNNOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10002:169: error: too many initializers for 'tflite::CreateRNNOptions(flatbuffers::FlatBufferBuilder&, const tflite::RNNOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const RNNOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10009:75: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SequenceRNNOptionsT *SequenceRNNOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10015:86: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SequenceRNNOptions::UnPackTo(SequenceRNNOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10022:161: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SequenceRNNOptions> SequenceRNNOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SequenceRNNOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10026:161: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SequenceRNNOptions> CreateSequenceRNNOptions(flatbuffers::FlatBufferBuilder &_fbb, const SequenceRNNOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SequenceRNNOptions> tflite::CreateSequenceRNNOptions(flatbuffers::FlatBufferBuilder&, const tflite::SequenceRNNOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10029:114: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SequenceRNNOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10029:177: error: too many initializers for 'tflite::CreateSequenceRNNOptions(flatbuffers::FlatBufferBuilder&, const tflite::SequenceRNNOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SequenceRNNOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                 ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10038:101: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline BidirectionalSequenceRNNOptionsT *BidirectionalSequenceRNNOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10044:112: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void BidirectionalSequenceRNNOptions::UnPackTo(BidirectionalSequenceRNNOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10052:200: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<BidirectionalSequenceRNNOptions> BidirectionalSequenceRNNOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const BidirectionalSequenceRNNOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10056:200: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<BidirectionalSequenceRNNOptions> CreateBidirectionalSequenceRNNOptions(flatbuffers::FlatBufferBuilder &_fbb, const BidirectionalSequenceRNNOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::BidirectionalSequenceRNNOptions> tflite::CreateBidirectionalSequenceRNNOptions(flatbuffers::FlatBufferBuilder&, const tflite::BidirectionalSequenceRNNOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10059:127: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BidirectionalSequenceRNNOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10059:190: error: too many initializers for 'tflite::CreateBidirectionalSequenceRNNOptions(flatbuffers::FlatBufferBuilder&, const tflite::BidirectionalSequenceRNNOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BidirectionalSequenceRNNOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                              ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10070:81: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline FullyConnectedOptionsT *FullyConnectedOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10076:92: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void FullyConnectedOptions::UnPackTo(FullyConnectedOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10084:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FullyConnectedOptions> FullyConnectedOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const FullyConnectedOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10088:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FullyConnectedOptions> CreateFullyConnectedOptions(flatbuffers::FlatBufferBuilder &_fbb, const FullyConnectedOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::FullyConnectedOptions> tflite::CreateFullyConnectedOptions(flatbuffers::FlatBufferBuilder&, const tflite::FullyConnectedOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10091:117: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FullyConnectedOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10091:180: error: too many initializers for 'tflite::CreateFullyConnectedOptions(flatbuffers::FlatBufferBuilder&, const tflite::FullyConnectedOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FullyConnectedOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                    ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10102:67: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SoftmaxOptionsT *SoftmaxOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10108:78: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SoftmaxOptions::UnPackTo(SoftmaxOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10114:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SoftmaxOptions> SoftmaxOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SoftmaxOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10118:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SoftmaxOptions> CreateSoftmaxOptions(flatbuffers::FlatBufferBuilder &_fbb, const SoftmaxOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SoftmaxOptions> tflite::CreateSoftmaxOptions(flatbuffers::FlatBufferBuilder&, const tflite::SoftmaxOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10121:110: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SoftmaxOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10121:173: error: too many initializers for 'tflite::CreateSoftmaxOptions(flatbuffers::FlatBufferBuilder&, const tflite::SoftmaxOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SoftmaxOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                             ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10128:79: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ConcatenationOptionsT *ConcatenationOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10134:90: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ConcatenationOptions::UnPackTo(ConcatenationOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10141:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ConcatenationOptions> ConcatenationOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ConcatenationOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10145:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ConcatenationOptions> CreateConcatenationOptions(flatbuffers::FlatBufferBuilder &_fbb, const ConcatenationOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ConcatenationOptions> tflite::CreateConcatenationOptions(flatbuffers::FlatBufferBuilder&, const tflite::ConcatenationOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10148:116: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ConcatenationOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10148:179: error: too many initializers for 'tflite::CreateConcatenationOptions(flatbuffers::FlatBufferBuilder&, const tflite::ConcatenationOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ConcatenationOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                   ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10157:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline AddOptionsT *AddOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10163:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void AddOptions::UnPackTo(AddOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10169:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<AddOptions> AddOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const AddOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10173:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<AddOptions> CreateAddOptions(flatbuffers::FlatBufferBuilder &_fbb, const AddOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::AddOptions> tflite::CreateAddOptions(flatbuffers::FlatBufferBuilder&, const tflite::AddOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10176:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AddOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10176:169: error: too many initializers for 'tflite::CreateAddOptions(flatbuffers::FlatBufferBuilder&, const tflite::AddOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AddOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10183:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline MulOptionsT *MulOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10189:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void MulOptions::UnPackTo(MulOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10195:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MulOptions> MulOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const MulOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10199:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MulOptions> CreateMulOptions(flatbuffers::FlatBufferBuilder &_fbb, const MulOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::MulOptions> tflite::CreateMulOptions(flatbuffers::FlatBufferBuilder&, const tflite::MulOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10202:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MulOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10202:169: error: too many initializers for 'tflite::CreateMulOptions(flatbuffers::FlatBufferBuilder&, const tflite::MulOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MulOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10209:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline L2NormOptionsT *L2NormOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10215:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void L2NormOptions::UnPackTo(L2NormOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10221:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<L2NormOptions> L2NormOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const L2NormOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10225:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<L2NormOptions> CreateL2NormOptions(flatbuffers::FlatBufferBuilder &_fbb, const L2NormOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::L2NormOptions> tflite::CreateL2NormOptions(flatbuffers::FlatBufferBuilder&, const tflite::L2NormOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10228:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const L2NormOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10228:172: error: too many initializers for 'tflite::CreateL2NormOptions(flatbuffers::FlatBufferBuilder&, const tflite::L2NormOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const L2NormOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10235:105: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LocalResponseNormalizationOptionsT *LocalResponseNormalizationOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10241:116: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LocalResponseNormalizationOptions::UnPackTo(LocalResponseNormalizationOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10250:206: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LocalResponseNormalizationOptions> LocalResponseNormalizationOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LocalResponseNormalizationOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10254:206: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LocalResponseNormalizationOptions> CreateLocalResponseNormalizationOptions(flatbuffers::FlatBufferBuilder &_fbb, const LocalResponseNormalizationOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LocalResponseNormalizationOptions> tflite::CreateLocalResponseNormalizationOptions(flatbuffers::FlatBufferBuilder&, const tflite::LocalResponseNormalizationOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10257:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LocalResponseNormalizationOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10257:192: error: too many initializers for 'tflite::CreateLocalResponseNormalizationOptions(flatbuffers::FlatBufferBuilder&, const tflite::LocalResponseNormalizationOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LocalResponseNormalizationOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                                ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10270:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LSTMOptionsT *LSTMOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10276:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LSTMOptions::UnPackTo(LSTMOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10285:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LSTMOptions> LSTMOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LSTMOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10289:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LSTMOptions> CreateLSTMOptions(flatbuffers::FlatBufferBuilder &_fbb, const LSTMOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LSTMOptions> tflite::CreateLSTMOptions(flatbuffers::FlatBufferBuilder&, const tflite::LSTMOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10292:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LSTMOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10292:170: error: too many initializers for 'tflite::CreateLSTMOptions(flatbuffers::FlatBufferBuilder&, const tflite::LSTMOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LSTMOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10305:105: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline UnidirectionalSequenceLSTMOptionsT *UnidirectionalSequenceLSTMOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10311:116: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void UnidirectionalSequenceLSTMOptions::UnPackTo(UnidirectionalSequenceLSTMOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10320:206: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<UnidirectionalSequenceLSTMOptions> UnidirectionalSequenceLSTMOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const UnidirectionalSequenceLSTMOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10324:206: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<UnidirectionalSequenceLSTMOptions> CreateUnidirectionalSequenceLSTMOptions(flatbuffers::FlatBufferBuilder &_fbb, const UnidirectionalSequenceLSTMOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::UnidirectionalSequenceLSTMOptions> tflite::CreateUnidirectionalSequenceLSTMOptions(flatbuffers::FlatBufferBuilder&, const tflite::UnidirectionalSequenceLSTMOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10327:129: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const UnidirectionalSequenceLSTMOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10327:192: error: too many initializers for 'tflite::CreateUnidirectionalSequenceLSTMOptions(flatbuffers::FlatBufferBuilder&, const tflite::UnidirectionalSequenceLSTMOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const UnidirectionalSequenceLSTMOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                                ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10340:103: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline BidirectionalSequenceLSTMOptionsT *BidirectionalSequenceLSTMOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10346:114: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void BidirectionalSequenceLSTMOptions::UnPackTo(BidirectionalSequenceLSTMOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10356:203: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<BidirectionalSequenceLSTMOptions> BidirectionalSequenceLSTMOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const BidirectionalSequenceLSTMOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10360:203: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<BidirectionalSequenceLSTMOptions> CreateBidirectionalSequenceLSTMOptions(flatbuffers::FlatBufferBuilder &_fbb, const BidirectionalSequenceLSTMOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::BidirectionalSequenceLSTMOptions> tflite::CreateBidirectionalSequenceLSTMOptions(flatbuffers::FlatBufferBuilder&, const tflite::BidirectionalSequenceLSTMOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10363:128: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BidirectionalSequenceLSTMOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10363:191: error: too many initializers for 'tflite::CreateBidirectionalSequenceLSTMOptions(flatbuffers::FlatBufferBuilder&, const tflite::BidirectionalSequenceLSTMOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BidirectionalSequenceLSTMOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10378:81: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ResizeBilinearOptionsT *ResizeBilinearOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10384:92: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ResizeBilinearOptions::UnPackTo(ResizeBilinearOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10390:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ResizeBilinearOptions> ResizeBilinearOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ResizeBilinearOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10394:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ResizeBilinearOptions> CreateResizeBilinearOptions(flatbuffers::FlatBufferBuilder &_fbb, const ResizeBilinearOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ResizeBilinearOptions> tflite::CreateResizeBilinearOptions(flatbuffers::FlatBufferBuilder&, const tflite::ResizeBilinearOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10397:117: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ResizeBilinearOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10397:180: error: too many initializers for 'tflite::CreateResizeBilinearOptions(flatbuffers::FlatBufferBuilder&, const tflite::ResizeBilinearOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ResizeBilinearOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                    ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10404:95: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ResizeNearestNeighborOptionsT *ResizeNearestNeighborOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10410:106: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ResizeNearestNeighborOptions::UnPackTo(ResizeNearestNeighborOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10416:191: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ResizeNearestNeighborOptions> ResizeNearestNeighborOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ResizeNearestNeighborOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10420:191: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ResizeNearestNeighborOptions> CreateResizeNearestNeighborOptions(flatbuffers::FlatBufferBuilder &_fbb, const ResizeNearestNeighborOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ResizeNearestNeighborOptions> tflite::CreateResizeNearestNeighborOptions(flatbuffers::FlatBufferBuilder&, const tflite::ResizeNearestNeighborOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10423:124: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ResizeNearestNeighborOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10423:187: error: too many initializers for 'tflite::CreateResizeNearestNeighborOptions(flatbuffers::FlatBufferBuilder&, const tflite::ResizeNearestNeighborOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ResizeNearestNeighborOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10430:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline CallOptionsT *CallOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10436:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void CallOptions::UnPackTo(CallOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10442:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<CallOptions> CallOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CallOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10446:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<CallOptions> CreateCallOptions(flatbuffers::FlatBufferBuilder &_fbb, const CallOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::CallOptions> tflite::CreateCallOptions(flatbuffers::FlatBufferBuilder&, const tflite::CallOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10449:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CallOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10449:170: error: too many initializers for 'tflite::CreateCallOptions(flatbuffers::FlatBufferBuilder&, const tflite::CallOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CallOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10456:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline PadOptionsT *PadOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10462:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void PadOptions::UnPackTo(PadOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10467:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<PadOptions> PadOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PadOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10471:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<PadOptions> CreatePadOptions(flatbuffers::FlatBufferBuilder &_fbb, const PadOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::PadOptions> tflite::CreatePadOptions(flatbuffers::FlatBufferBuilder&, const tflite::PadOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10474:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PadOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10474:169: error: too many initializers for 'tflite::CreatePadOptions(flatbuffers::FlatBufferBuilder&, const tflite::PadOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PadOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10479:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline PadV2OptionsT *PadV2Options::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10485:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void PadV2Options::UnPackTo(PadV2OptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10490:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<PadV2Options> PadV2Options::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PadV2OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10494:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<PadV2Options> CreatePadV2Options(flatbuffers::FlatBufferBuilder &_fbb, const PadV2OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::PadV2Options> tflite::CreatePadV2Options(flatbuffers::FlatBufferBuilder&, const tflite::PadV2OptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10497:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PadV2OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10497:171: error: too many initializers for 'tflite::CreatePadV2Options(flatbuffers::FlatBufferBuilder&, const tflite::PadV2OptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PadV2OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10502:67: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ReshapeOptionsT *ReshapeOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10508:78: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ReshapeOptions::UnPackTo(ReshapeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10514:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ReshapeOptions> ReshapeOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ReshapeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10518:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ReshapeOptions> CreateReshapeOptions(flatbuffers::FlatBufferBuilder &_fbb, const ReshapeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ReshapeOptions> tflite::CreateReshapeOptions(flatbuffers::FlatBufferBuilder&, const tflite::ReshapeOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10521:110: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ReshapeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10521:173: error: too many initializers for 'tflite::CreateReshapeOptions(flatbuffers::FlatBufferBuilder&, const tflite::ReshapeOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ReshapeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                             ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10528:81: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SpaceToBatchNDOptionsT *SpaceToBatchNDOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10534:92: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SpaceToBatchNDOptions::UnPackTo(SpaceToBatchNDOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10539:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SpaceToBatchNDOptions> SpaceToBatchNDOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SpaceToBatchNDOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10543:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SpaceToBatchNDOptions> CreateSpaceToBatchNDOptions(flatbuffers::FlatBufferBuilder &_fbb, const SpaceToBatchNDOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SpaceToBatchNDOptions> tflite::CreateSpaceToBatchNDOptions(flatbuffers::FlatBufferBuilder&, const tflite::SpaceToBatchNDOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10546:117: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SpaceToBatchNDOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10546:180: error: too many initializers for 'tflite::CreateSpaceToBatchNDOptions(flatbuffers::FlatBufferBuilder&, const tflite::SpaceToBatchNDOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SpaceToBatchNDOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                    ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10551:81: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline BatchToSpaceNDOptionsT *BatchToSpaceNDOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10557:92: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void BatchToSpaceNDOptions::UnPackTo(BatchToSpaceNDOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10562:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<BatchToSpaceNDOptions> BatchToSpaceNDOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const BatchToSpaceNDOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10566:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<BatchToSpaceNDOptions> CreateBatchToSpaceNDOptions(flatbuffers::FlatBufferBuilder &_fbb, const BatchToSpaceNDOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::BatchToSpaceNDOptions> tflite::CreateBatchToSpaceNDOptions(flatbuffers::FlatBufferBuilder&, const tflite::BatchToSpaceNDOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10569:117: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BatchToSpaceNDOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10569:180: error: too many initializers for 'tflite::CreateBatchToSpaceNDOptions(flatbuffers::FlatBufferBuilder&, const tflite::BatchToSpaceNDOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BatchToSpaceNDOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                    ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10574:69: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SkipGramOptionsT *SkipGramOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10580:80: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SkipGramOptions::UnPackTo(SkipGramOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10588:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SkipGramOptions> SkipGramOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SkipGramOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10592:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SkipGramOptions> CreateSkipGramOptions(flatbuffers::FlatBufferBuilder &_fbb, const SkipGramOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SkipGramOptions> tflite::CreateSkipGramOptions(flatbuffers::FlatBufferBuilder&, const tflite::SkipGramOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10595:111: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SkipGramOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10595:174: error: too many initializers for 'tflite::CreateSkipGramOptions(flatbuffers::FlatBufferBuilder&, const tflite::SkipGramOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SkipGramOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                              ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10606:77: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SpaceToDepthOptionsT *SpaceToDepthOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10612:88: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SpaceToDepthOptions::UnPackTo(SpaceToDepthOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10618:164: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SpaceToDepthOptions> SpaceToDepthOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SpaceToDepthOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10622:164: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SpaceToDepthOptions> CreateSpaceToDepthOptions(flatbuffers::FlatBufferBuilder &_fbb, const SpaceToDepthOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SpaceToDepthOptions> tflite::CreateSpaceToDepthOptions(flatbuffers::FlatBufferBuilder&, const tflite::SpaceToDepthOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10625:115: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SpaceToDepthOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10625:178: error: too many initializers for 'tflite::CreateSpaceToDepthOptions(flatbuffers::FlatBufferBuilder&, const tflite::SpaceToDepthOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SpaceToDepthOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                  ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10632:77: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline DepthToSpaceOptionsT *DepthToSpaceOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10638:88: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void DepthToSpaceOptions::UnPackTo(DepthToSpaceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10644:164: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<DepthToSpaceOptions> DepthToSpaceOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DepthToSpaceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10648:164: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<DepthToSpaceOptions> CreateDepthToSpaceOptions(flatbuffers::FlatBufferBuilder &_fbb, const DepthToSpaceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::DepthToSpaceOptions> tflite::CreateDepthToSpaceOptions(flatbuffers::FlatBufferBuilder&, const tflite::DepthToSpaceOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10651:115: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DepthToSpaceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10651:178: error: too many initializers for 'tflite::CreateDepthToSpaceOptions(flatbuffers::FlatBufferBuilder&, const tflite::DepthToSpaceOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DepthToSpaceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                  ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10658:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SubOptionsT *SubOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10664:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SubOptions::UnPackTo(SubOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10670:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SubOptions> SubOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SubOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10674:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SubOptions> CreateSubOptions(flatbuffers::FlatBufferBuilder &_fbb, const SubOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SubOptions> tflite::CreateSubOptions(flatbuffers::FlatBufferBuilder&, const tflite::SubOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10677:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SubOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10677:169: error: too many initializers for 'tflite::CreateSubOptions(flatbuffers::FlatBufferBuilder&, const tflite::SubOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SubOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10684:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline DivOptionsT *DivOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10690:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void DivOptions::UnPackTo(DivOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10696:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<DivOptions> DivOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DivOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10700:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<DivOptions> CreateDivOptions(flatbuffers::FlatBufferBuilder &_fbb, const DivOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::DivOptions> tflite::CreateDivOptions(flatbuffers::FlatBufferBuilder&, const tflite::DivOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10703:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DivOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10703:169: error: too many initializers for 'tflite::CreateDivOptions(flatbuffers::FlatBufferBuilder&, const tflite::DivOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DivOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10710:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline TopKV2OptionsT *TopKV2Options::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10716:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void TopKV2Options::UnPackTo(TopKV2OptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10721:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<TopKV2Options> TopKV2Options::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TopKV2OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10725:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<TopKV2Options> CreateTopKV2Options(flatbuffers::FlatBufferBuilder &_fbb, const TopKV2OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::TopKV2Options> tflite::CreateTopKV2Options(flatbuffers::FlatBufferBuilder&, const tflite::TopKV2OptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10728:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TopKV2OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10728:172: error: too many initializers for 'tflite::CreateTopKV2Options(flatbuffers::FlatBufferBuilder&, const tflite::TopKV2OptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TopKV2OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10733:95: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline EmbeddingLookupSparseOptionsT *EmbeddingLookupSparseOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10739:106: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void EmbeddingLookupSparseOptions::UnPackTo(EmbeddingLookupSparseOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10745:191: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<EmbeddingLookupSparseOptions> EmbeddingLookupSparseOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const EmbeddingLookupSparseOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10749:191: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<EmbeddingLookupSparseOptions> CreateEmbeddingLookupSparseOptions(flatbuffers::FlatBufferBuilder &_fbb, const EmbeddingLookupSparseOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::EmbeddingLookupSparseOptions> tflite::CreateEmbeddingLookupSparseOptions(flatbuffers::FlatBufferBuilder&, const tflite::EmbeddingLookupSparseOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10752:124: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const EmbeddingLookupSparseOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10752:187: error: too many initializers for 'tflite::CreateEmbeddingLookupSparseOptions(flatbuffers::FlatBufferBuilder&, const tflite::EmbeddingLookupSparseOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const EmbeddingLookupSparseOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10759:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline GatherOptionsT *GatherOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10765:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void GatherOptions::UnPackTo(GatherOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10771:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<GatherOptions> GatherOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const GatherOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10775:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<GatherOptions> CreateGatherOptions(flatbuffers::FlatBufferBuilder &_fbb, const GatherOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::GatherOptions> tflite::CreateGatherOptions(flatbuffers::FlatBufferBuilder&, const tflite::GatherOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10778:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GatherOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10778:172: error: too many initializers for 'tflite::CreateGatherOptions(flatbuffers::FlatBufferBuilder&, const tflite::GatherOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GatherOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10785:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline TransposeOptionsT *TransposeOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10791:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void TransposeOptions::UnPackTo(TransposeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10796:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<TransposeOptions> TransposeOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TransposeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10800:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<TransposeOptions> CreateTransposeOptions(flatbuffers::FlatBufferBuilder &_fbb, const TransposeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::TransposeOptions> tflite::CreateTransposeOptions(flatbuffers::FlatBufferBuilder&, const tflite::TransposeOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10803:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TransposeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10803:175: error: too many initializers for 'tflite::CreateTransposeOptions(flatbuffers::FlatBufferBuilder&, const tflite::TransposeOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TransposeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10808:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ExpOptionsT *ExpOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10814:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ExpOptions::UnPackTo(ExpOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10819:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ExpOptions> ExpOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ExpOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10823:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ExpOptions> CreateExpOptions(flatbuffers::FlatBufferBuilder &_fbb, const ExpOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ExpOptions> tflite::CreateExpOptions(flatbuffers::FlatBufferBuilder&, const tflite::ExpOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10826:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ExpOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10826:169: error: too many initializers for 'tflite::CreateExpOptions(flatbuffers::FlatBufferBuilder&, const tflite::ExpOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ExpOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10831:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline CosOptionsT *CosOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10837:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void CosOptions::UnPackTo(CosOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10842:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<CosOptions> CosOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CosOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10846:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<CosOptions> CreateCosOptions(flatbuffers::FlatBufferBuilder &_fbb, const CosOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::CosOptions> tflite::CreateCosOptions(flatbuffers::FlatBufferBuilder&, const tflite::CosOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10849:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CosOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10849:169: error: too many initializers for 'tflite::CreateCosOptions(flatbuffers::FlatBufferBuilder&, const tflite::CosOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CosOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10854:67: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ReducerOptionsT *ReducerOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10860:78: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ReducerOptions::UnPackTo(ReducerOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10866:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ReducerOptions> ReducerOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ReducerOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10870:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ReducerOptions> CreateReducerOptions(flatbuffers::FlatBufferBuilder &_fbb, const ReducerOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ReducerOptions> tflite::CreateReducerOptions(flatbuffers::FlatBufferBuilder&, const tflite::ReducerOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10873:110: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ReducerOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10873:173: error: too many initializers for 'tflite::CreateReducerOptions(flatbuffers::FlatBufferBuilder&, const tflite::ReducerOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ReducerOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                             ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10880:67: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SqueezeOptionsT *SqueezeOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10886:78: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SqueezeOptions::UnPackTo(SqueezeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10892:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SqueezeOptions> SqueezeOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SqueezeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10896:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SqueezeOptions> CreateSqueezeOptions(flatbuffers::FlatBufferBuilder &_fbb, const SqueezeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SqueezeOptions> tflite::CreateSqueezeOptions(flatbuffers::FlatBufferBuilder&, const tflite::SqueezeOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10899:110: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SqueezeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10899:173: error: too many initializers for 'tflite::CreateSqueezeOptions(flatbuffers::FlatBufferBuilder&, const tflite::SqueezeOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SqueezeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                             ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10906:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SplitOptionsT *SplitOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10912:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SplitOptions::UnPackTo(SplitOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10918:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SplitOptions> SplitOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SplitOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10922:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SplitOptions> CreateSplitOptions(flatbuffers::FlatBufferBuilder &_fbb, const SplitOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SplitOptions> tflite::CreateSplitOptions(flatbuffers::FlatBufferBuilder&, const tflite::SplitOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10925:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SplitOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10925:171: error: too many initializers for 'tflite::CreateSplitOptions(flatbuffers::FlatBufferBuilder&, const tflite::SplitOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SplitOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10932:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SplitVOptionsT *SplitVOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10938:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SplitVOptions::UnPackTo(SplitVOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10944:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SplitVOptions> SplitVOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SplitVOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10948:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SplitVOptions> CreateSplitVOptions(flatbuffers::FlatBufferBuilder &_fbb, const SplitVOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SplitVOptions> tflite::CreateSplitVOptions(flatbuffers::FlatBufferBuilder&, const tflite::SplitVOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10951:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SplitVOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10951:172: error: too many initializers for 'tflite::CreateSplitVOptions(flatbuffers::FlatBufferBuilder&, const tflite::SplitVOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SplitVOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10958:77: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline StridedSliceOptionsT *StridedSliceOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10964:88: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void StridedSliceOptions::UnPackTo(StridedSliceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10974:164: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<StridedSliceOptions> StridedSliceOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const StridedSliceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10978:164: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<StridedSliceOptions> CreateStridedSliceOptions(flatbuffers::FlatBufferBuilder &_fbb, const StridedSliceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::StridedSliceOptions> tflite::CreateStridedSliceOptions(flatbuffers::FlatBufferBuilder&, const tflite::StridedSliceOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10981:115: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const StridedSliceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10981:178: error: too many initializers for 'tflite::CreateStridedSliceOptions(flatbuffers::FlatBufferBuilder&, const tflite::StridedSliceOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const StridedSliceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                  ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:10996:73: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LogSoftmaxOptionsT *LogSoftmaxOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11002:84: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LogSoftmaxOptions::UnPackTo(LogSoftmaxOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11007:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LogSoftmaxOptions> LogSoftmaxOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LogSoftmaxOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11011:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LogSoftmaxOptions> CreateLogSoftmaxOptions(flatbuffers::FlatBufferBuilder &_fbb, const LogSoftmaxOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LogSoftmaxOptions> tflite::CreateLogSoftmaxOptions(flatbuffers::FlatBufferBuilder&, const tflite::LogSoftmaxOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11014:113: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LogSoftmaxOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11014:176: error: too many initializers for 'tflite::CreateLogSoftmaxOptions(flatbuffers::FlatBufferBuilder&, const tflite::LogSoftmaxOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LogSoftmaxOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11019:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline CastOptionsT *CastOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11025:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void CastOptions::UnPackTo(CastOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11032:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<CastOptions> CastOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const CastOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11036:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<CastOptions> CreateCastOptions(flatbuffers::FlatBufferBuilder &_fbb, const CastOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::CastOptions> tflite::CreateCastOptions(flatbuffers::FlatBufferBuilder&, const tflite::CastOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11039:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CastOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11039:170: error: too many initializers for 'tflite::CreateCastOptions(flatbuffers::FlatBufferBuilder&, const tflite::CastOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const CastOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11048:73: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline DequantizeOptionsT *DequantizeOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11054:84: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void DequantizeOptions::UnPackTo(DequantizeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11059:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<DequantizeOptions> DequantizeOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const DequantizeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11063:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<DequantizeOptions> CreateDequantizeOptions(flatbuffers::FlatBufferBuilder &_fbb, const DequantizeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::DequantizeOptions> tflite::CreateDequantizeOptions(flatbuffers::FlatBufferBuilder&, const tflite::DequantizeOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11066:113: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DequantizeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11066:176: error: too many initializers for 'tflite::CreateDequantizeOptions(flatbuffers::FlatBufferBuilder&, const tflite::DequantizeOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const DequantizeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11071:81: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline MaximumMinimumOptionsT *MaximumMinimumOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11077:92: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void MaximumMinimumOptions::UnPackTo(MaximumMinimumOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11082:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MaximumMinimumOptions> MaximumMinimumOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const MaximumMinimumOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11086:170: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MaximumMinimumOptions> CreateMaximumMinimumOptions(flatbuffers::FlatBufferBuilder &_fbb, const MaximumMinimumOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::MaximumMinimumOptions> tflite::CreateMaximumMinimumOptions(flatbuffers::FlatBufferBuilder&, const tflite::MaximumMinimumOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11089:117: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MaximumMinimumOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11089:180: error: too many initializers for 'tflite::CreateMaximumMinimumOptions(flatbuffers::FlatBufferBuilder&, const tflite::MaximumMinimumOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MaximumMinimumOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                    ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11094:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline TileOptionsT *TileOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11100:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void TileOptions::UnPackTo(TileOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11105:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<TileOptions> TileOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TileOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11109:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<TileOptions> CreateTileOptions(flatbuffers::FlatBufferBuilder &_fbb, const TileOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::TileOptions> tflite::CreateTileOptions(flatbuffers::FlatBufferBuilder&, const tflite::TileOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11112:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TileOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11112:170: error: too many initializers for 'tflite::CreateTileOptions(flatbuffers::FlatBufferBuilder&, const tflite::TileOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TileOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11117:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ArgMaxOptionsT *ArgMaxOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11123:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ArgMaxOptions::UnPackTo(ArgMaxOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11129:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ArgMaxOptions> ArgMaxOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ArgMaxOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11133:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ArgMaxOptions> CreateArgMaxOptions(flatbuffers::FlatBufferBuilder &_fbb, const ArgMaxOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ArgMaxOptions> tflite::CreateArgMaxOptions(flatbuffers::FlatBufferBuilder&, const tflite::ArgMaxOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11136:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ArgMaxOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11136:172: error: too many initializers for 'tflite::CreateArgMaxOptions(flatbuffers::FlatBufferBuilder&, const tflite::ArgMaxOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ArgMaxOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11143:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ArgMinOptionsT *ArgMinOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11149:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ArgMinOptions::UnPackTo(ArgMinOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11155:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ArgMinOptions> ArgMinOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ArgMinOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11159:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ArgMinOptions> CreateArgMinOptions(flatbuffers::FlatBufferBuilder &_fbb, const ArgMinOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ArgMinOptions> tflite::CreateArgMinOptions(flatbuffers::FlatBufferBuilder&, const tflite::ArgMinOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11162:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ArgMinOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11162:172: error: too many initializers for 'tflite::CreateArgMinOptions(flatbuffers::FlatBufferBuilder&, const tflite::ArgMinOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ArgMinOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11169:67: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline GreaterOptionsT *GreaterOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11175:78: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void GreaterOptions::UnPackTo(GreaterOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11180:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<GreaterOptions> GreaterOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const GreaterOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11184:149: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<GreaterOptions> CreateGreaterOptions(flatbuffers::FlatBufferBuilder &_fbb, const GreaterOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::GreaterOptions> tflite::CreateGreaterOptions(flatbuffers::FlatBufferBuilder&, const tflite::GreaterOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11187:110: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GreaterOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11187:173: error: too many initializers for 'tflite::CreateGreaterOptions(flatbuffers::FlatBufferBuilder&, const tflite::GreaterOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GreaterOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                             ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11192:77: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline GreaterEqualOptionsT *GreaterEqualOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11198:88: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void GreaterEqualOptions::UnPackTo(GreaterEqualOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11203:164: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<GreaterEqualOptions> GreaterEqualOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const GreaterEqualOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11207:164: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<GreaterEqualOptions> CreateGreaterEqualOptions(flatbuffers::FlatBufferBuilder &_fbb, const GreaterEqualOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::GreaterEqualOptions> tflite::CreateGreaterEqualOptions(flatbuffers::FlatBufferBuilder&, const tflite::GreaterEqualOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11210:115: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GreaterEqualOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11210:178: error: too many initializers for 'tflite::CreateGreaterEqualOptions(flatbuffers::FlatBufferBuilder&, const tflite::GreaterEqualOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GreaterEqualOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                  ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11215:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LessOptionsT *LessOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11221:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LessOptions::UnPackTo(LessOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11226:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LessOptions> LessOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LessOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11230:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LessOptions> CreateLessOptions(flatbuffers::FlatBufferBuilder &_fbb, const LessOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LessOptions> tflite::CreateLessOptions(flatbuffers::FlatBufferBuilder&, const tflite::LessOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11233:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LessOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11233:170: error: too many initializers for 'tflite::CreateLessOptions(flatbuffers::FlatBufferBuilder&, const tflite::LessOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LessOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11238:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LessEqualOptionsT *LessEqualOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11244:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LessEqualOptions::UnPackTo(LessEqualOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11249:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LessEqualOptions> LessEqualOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LessEqualOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11253:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LessEqualOptions> CreateLessEqualOptions(flatbuffers::FlatBufferBuilder &_fbb, const LessEqualOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LessEqualOptions> tflite::CreateLessEqualOptions(flatbuffers::FlatBufferBuilder&, const tflite::LessEqualOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11256:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LessEqualOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11256:175: error: too many initializers for 'tflite::CreateLessEqualOptions(flatbuffers::FlatBufferBuilder&, const tflite::LessEqualOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LessEqualOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11261:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline NegOptionsT *NegOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11267:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void NegOptions::UnPackTo(NegOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11272:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<NegOptions> NegOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const NegOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11276:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<NegOptions> CreateNegOptions(flatbuffers::FlatBufferBuilder &_fbb, const NegOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::NegOptions> tflite::CreateNegOptions(flatbuffers::FlatBufferBuilder&, const tflite::NegOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11279:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NegOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11279:169: error: too many initializers for 'tflite::CreateNegOptions(flatbuffers::FlatBufferBuilder&, const tflite::NegOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NegOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11284:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SelectOptionsT *SelectOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11290:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SelectOptions::UnPackTo(SelectOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11295:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SelectOptions> SelectOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SelectOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11299:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SelectOptions> CreateSelectOptions(flatbuffers::FlatBufferBuilder &_fbb, const SelectOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SelectOptions> tflite::CreateSelectOptions(flatbuffers::FlatBufferBuilder&, const tflite::SelectOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11302:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SelectOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11302:172: error: too many initializers for 'tflite::CreateSelectOptions(flatbuffers::FlatBufferBuilder&, const tflite::SelectOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SelectOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11307:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SliceOptionsT *SliceOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11313:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SliceOptions::UnPackTo(SliceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11318:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SliceOptions> SliceOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SliceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11322:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SliceOptions> CreateSliceOptions(flatbuffers::FlatBufferBuilder &_fbb, const SliceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SliceOptions> tflite::CreateSliceOptions(flatbuffers::FlatBufferBuilder&, const tflite::SliceOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11325:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SliceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11325:171: error: too many initializers for 'tflite::CreateSliceOptions(flatbuffers::FlatBufferBuilder&, const tflite::SliceOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SliceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11330:79: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline TransposeConvOptionsT *TransposeConvOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11336:90: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void TransposeConvOptions::UnPackTo(TransposeConvOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11344:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<TransposeConvOptions> TransposeConvOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const TransposeConvOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11348:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<TransposeConvOptions> CreateTransposeConvOptions(flatbuffers::FlatBufferBuilder &_fbb, const TransposeConvOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::TransposeConvOptions> tflite::CreateTransposeConvOptions(flatbuffers::FlatBufferBuilder&, const tflite::TransposeConvOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11351:116: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TransposeConvOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11351:179: error: too many initializers for 'tflite::CreateTransposeConvOptions(flatbuffers::FlatBufferBuilder&, const tflite::TransposeConvOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const TransposeConvOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                   ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11362:73: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ExpandDimsOptionsT *ExpandDimsOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11368:84: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ExpandDimsOptions::UnPackTo(ExpandDimsOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11373:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ExpandDimsOptions> ExpandDimsOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ExpandDimsOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11377:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ExpandDimsOptions> CreateExpandDimsOptions(flatbuffers::FlatBufferBuilder &_fbb, const ExpandDimsOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ExpandDimsOptions> tflite::CreateExpandDimsOptions(flatbuffers::FlatBufferBuilder&, const tflite::ExpandDimsOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11380:113: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ExpandDimsOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11380:176: error: too many initializers for 'tflite::CreateExpandDimsOptions(flatbuffers::FlatBufferBuilder&, const tflite::ExpandDimsOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ExpandDimsOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11385:79: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SparseToDenseOptionsT *SparseToDenseOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11391:90: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SparseToDenseOptions::UnPackTo(SparseToDenseOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11397:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SparseToDenseOptions> SparseToDenseOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SparseToDenseOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11401:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SparseToDenseOptions> CreateSparseToDenseOptions(flatbuffers::FlatBufferBuilder &_fbb, const SparseToDenseOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SparseToDenseOptions> tflite::CreateSparseToDenseOptions(flatbuffers::FlatBufferBuilder&, const tflite::SparseToDenseOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11404:116: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SparseToDenseOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11404:179: error: too many initializers for 'tflite::CreateSparseToDenseOptions(flatbuffers::FlatBufferBuilder&, const tflite::SparseToDenseOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SparseToDenseOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                   ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11411:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline EqualOptionsT *EqualOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11417:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void EqualOptions::UnPackTo(EqualOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11422:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<EqualOptions> EqualOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const EqualOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11426:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<EqualOptions> CreateEqualOptions(flatbuffers::FlatBufferBuilder &_fbb, const EqualOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::EqualOptions> tflite::CreateEqualOptions(flatbuffers::FlatBufferBuilder&, const tflite::EqualOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11429:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const EqualOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11429:171: error: too many initializers for 'tflite::CreateEqualOptions(flatbuffers::FlatBufferBuilder&, const tflite::EqualOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const EqualOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11434:69: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline NotEqualOptionsT *NotEqualOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11440:80: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void NotEqualOptions::UnPackTo(NotEqualOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11445:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<NotEqualOptions> NotEqualOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const NotEqualOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11449:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<NotEqualOptions> CreateNotEqualOptions(flatbuffers::FlatBufferBuilder &_fbb, const NotEqualOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::NotEqualOptions> tflite::CreateNotEqualOptions(flatbuffers::FlatBufferBuilder&, const tflite::NotEqualOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11452:111: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NotEqualOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11452:174: error: too many initializers for 'tflite::CreateNotEqualOptions(flatbuffers::FlatBufferBuilder&, const tflite::NotEqualOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NotEqualOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                              ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11457:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ShapeOptionsT *ShapeOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11463:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ShapeOptions::UnPackTo(ShapeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11469:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ShapeOptions> ShapeOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ShapeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11473:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ShapeOptions> CreateShapeOptions(flatbuffers::FlatBufferBuilder &_fbb, const ShapeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ShapeOptions> tflite::CreateShapeOptions(flatbuffers::FlatBufferBuilder&, const tflite::ShapeOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11476:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ShapeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11476:171: error: too many initializers for 'tflite::CreateShapeOptions(flatbuffers::FlatBufferBuilder&, const tflite::ShapeOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ShapeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11483:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline RankOptionsT *RankOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11489:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void RankOptions::UnPackTo(RankOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11494:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<RankOptions> RankOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const RankOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11498:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<RankOptions> CreateRankOptions(flatbuffers::FlatBufferBuilder &_fbb, const RankOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::RankOptions> tflite::CreateRankOptions(flatbuffers::FlatBufferBuilder&, const tflite::RankOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11501:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const RankOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11501:170: error: too many initializers for 'tflite::CreateRankOptions(flatbuffers::FlatBufferBuilder&, const tflite::RankOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const RankOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11506:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline PowOptionsT *PowOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11512:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void PowOptions::UnPackTo(PowOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11517:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<PowOptions> PowOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PowOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11521:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<PowOptions> CreatePowOptions(flatbuffers::FlatBufferBuilder &_fbb, const PowOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::PowOptions> tflite::CreatePowOptions(flatbuffers::FlatBufferBuilder&, const tflite::PowOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11524:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PowOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11524:169: error: too many initializers for 'tflite::CreatePowOptions(flatbuffers::FlatBufferBuilder&, const tflite::PowOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PowOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11529:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline FakeQuantOptionsT *FakeQuantOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11535:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void FakeQuantOptions::UnPackTo(FakeQuantOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11544:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FakeQuantOptions> FakeQuantOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const FakeQuantOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11548:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FakeQuantOptions> CreateFakeQuantOptions(flatbuffers::FlatBufferBuilder &_fbb, const FakeQuantOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::FakeQuantOptions> tflite::CreateFakeQuantOptions(flatbuffers::FlatBufferBuilder&, const tflite::FakeQuantOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11551:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FakeQuantOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11551:175: error: too many initializers for 'tflite::CreateFakeQuantOptions(flatbuffers::FlatBufferBuilder&, const tflite::FakeQuantOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FakeQuantOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11564:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline PackOptionsT *PackOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11570:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void PackOptions::UnPackTo(PackOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11577:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<PackOptions> PackOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const PackOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11581:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<PackOptions> CreatePackOptions(flatbuffers::FlatBufferBuilder &_fbb, const PackOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::PackOptions> tflite::CreatePackOptions(flatbuffers::FlatBufferBuilder&, const tflite::PackOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11584:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PackOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11584:170: error: too many initializers for 'tflite::CreatePackOptions(flatbuffers::FlatBufferBuilder&, const tflite::PackOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const PackOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11593:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LogicalOrOptionsT *LogicalOrOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11599:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LogicalOrOptions::UnPackTo(LogicalOrOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11604:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LogicalOrOptions> LogicalOrOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LogicalOrOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11608:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LogicalOrOptions> CreateLogicalOrOptions(flatbuffers::FlatBufferBuilder &_fbb, const LogicalOrOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LogicalOrOptions> tflite::CreateLogicalOrOptions(flatbuffers::FlatBufferBuilder&, const tflite::LogicalOrOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11611:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LogicalOrOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11611:175: error: too many initializers for 'tflite::CreateLogicalOrOptions(flatbuffers::FlatBufferBuilder&, const tflite::LogicalOrOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LogicalOrOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11616:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline OneHotOptionsT *OneHotOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11622:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void OneHotOptions::UnPackTo(OneHotOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11628:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<OneHotOptions> OneHotOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const OneHotOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11632:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<OneHotOptions> CreateOneHotOptions(flatbuffers::FlatBufferBuilder &_fbb, const OneHotOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::OneHotOptions> tflite::CreateOneHotOptions(flatbuffers::FlatBufferBuilder&, const tflite::OneHotOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11635:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const OneHotOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11635:172: error: too many initializers for 'tflite::CreateOneHotOptions(flatbuffers::FlatBufferBuilder&, const tflite::OneHotOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const OneHotOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11642:59: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline AbsOptionsT *AbsOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11648:70: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void AbsOptions::UnPackTo(AbsOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11653:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<AbsOptions> AbsOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const AbsOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11657:137: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<AbsOptions> CreateAbsOptions(flatbuffers::FlatBufferBuilder &_fbb, const AbsOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::AbsOptions> tflite::CreateAbsOptions(flatbuffers::FlatBufferBuilder&, const tflite::AbsOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11660:106: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AbsOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11660:169: error: too many initializers for 'tflite::CreateAbsOptions(flatbuffers::FlatBufferBuilder&, const tflite::AbsOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AbsOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11665:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline HardSwishOptionsT *HardSwishOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11671:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void HardSwishOptions::UnPackTo(HardSwishOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11676:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<HardSwishOptions> HardSwishOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const HardSwishOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11680:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<HardSwishOptions> CreateHardSwishOptions(flatbuffers::FlatBufferBuilder &_fbb, const HardSwishOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::HardSwishOptions> tflite::CreateHardSwishOptions(flatbuffers::FlatBufferBuilder&, const tflite::HardSwishOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11683:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const HardSwishOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11683:175: error: too many initializers for 'tflite::CreateHardSwishOptions(flatbuffers::FlatBufferBuilder&, const tflite::HardSwishOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const HardSwishOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11688:73: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LogicalAndOptionsT *LogicalAndOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11694:84: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LogicalAndOptions::UnPackTo(LogicalAndOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11699:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LogicalAndOptions> LogicalAndOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LogicalAndOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11703:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LogicalAndOptions> CreateLogicalAndOptions(flatbuffers::FlatBufferBuilder &_fbb, const LogicalAndOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LogicalAndOptions> tflite::CreateLogicalAndOptions(flatbuffers::FlatBufferBuilder&, const tflite::LogicalAndOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11706:113: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LogicalAndOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11706:176: error: too many initializers for 'tflite::CreateLogicalAndOptions(flatbuffers::FlatBufferBuilder&, const tflite::LogicalAndOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LogicalAndOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11711:73: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LogicalNotOptionsT *LogicalNotOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11717:84: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LogicalNotOptions::UnPackTo(LogicalNotOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11722:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LogicalNotOptions> LogicalNotOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LogicalNotOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11726:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LogicalNotOptions> CreateLogicalNotOptions(flatbuffers::FlatBufferBuilder &_fbb, const LogicalNotOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LogicalNotOptions> tflite::CreateLogicalNotOptions(flatbuffers::FlatBufferBuilder&, const tflite::LogicalNotOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11729:113: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LogicalNotOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11729:176: error: too many initializers for 'tflite::CreateLogicalNotOptions(flatbuffers::FlatBufferBuilder&, const tflite::LogicalNotOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LogicalNotOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11734:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline UnpackOptionsT *UnpackOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11740:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void UnpackOptions::UnPackTo(UnpackOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11747:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<UnpackOptions> UnpackOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const UnpackOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11751:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<UnpackOptions> CreateUnpackOptions(flatbuffers::FlatBufferBuilder &_fbb, const UnpackOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::UnpackOptions> tflite::CreateUnpackOptions(flatbuffers::FlatBufferBuilder&, const tflite::UnpackOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11754:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const UnpackOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11754:172: error: too many initializers for 'tflite::CreateUnpackOptions(flatbuffers::FlatBufferBuilder&, const tflite::UnpackOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const UnpackOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11763:69: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline FloorDivOptionsT *FloorDivOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11769:80: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void FloorDivOptions::UnPackTo(FloorDivOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11774:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FloorDivOptions> FloorDivOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const FloorDivOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11778:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FloorDivOptions> CreateFloorDivOptions(flatbuffers::FlatBufferBuilder &_fbb, const FloorDivOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::FloorDivOptions> tflite::CreateFloorDivOptions(flatbuffers::FlatBufferBuilder&, const tflite::FloorDivOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11781:111: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FloorDivOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11781:174: error: too many initializers for 'tflite::CreateFloorDivOptions(flatbuffers::FlatBufferBuilder&, const tflite::FloorDivOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FloorDivOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                              ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11786:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SquareOptionsT *SquareOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11792:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SquareOptions::UnPackTo(SquareOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11797:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SquareOptions> SquareOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SquareOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11801:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SquareOptions> CreateSquareOptions(flatbuffers::FlatBufferBuilder &_fbb, const SquareOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SquareOptions> tflite::CreateSquareOptions(flatbuffers::FlatBufferBuilder&, const tflite::SquareOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11804:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SquareOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11804:172: error: too many initializers for 'tflite::CreateSquareOptions(flatbuffers::FlatBufferBuilder&, const tflite::SquareOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SquareOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11809:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ZerosLikeOptionsT *ZerosLikeOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11815:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ZerosLikeOptions::UnPackTo(ZerosLikeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11820:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ZerosLikeOptions> ZerosLikeOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ZerosLikeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11824:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ZerosLikeOptions> CreateZerosLikeOptions(flatbuffers::FlatBufferBuilder &_fbb, const ZerosLikeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ZerosLikeOptions> tflite::CreateZerosLikeOptions(flatbuffers::FlatBufferBuilder&, const tflite::ZerosLikeOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11827:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ZerosLikeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11827:175: error: too many initializers for 'tflite::CreateZerosLikeOptions(flatbuffers::FlatBufferBuilder&, const tflite::ZerosLikeOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ZerosLikeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11832:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline FillOptionsT *FillOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11838:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void FillOptions::UnPackTo(FillOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11843:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FillOptions> FillOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const FillOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11847:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FillOptions> CreateFillOptions(flatbuffers::FlatBufferBuilder &_fbb, const FillOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::FillOptions> tflite::CreateFillOptions(flatbuffers::FlatBufferBuilder&, const tflite::FillOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11850:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FillOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11850:170: error: too many initializers for 'tflite::CreateFillOptions(flatbuffers::FlatBufferBuilder&, const tflite::FillOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FillOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11855:69: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline FloorModOptionsT *FloorModOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11861:80: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void FloorModOptions::UnPackTo(FloorModOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11866:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FloorModOptions> FloorModOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const FloorModOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11870:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<FloorModOptions> CreateFloorModOptions(flatbuffers::FlatBufferBuilder &_fbb, const FloorModOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::FloorModOptions> tflite::CreateFloorModOptions(flatbuffers::FlatBufferBuilder&, const tflite::FloorModOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11873:111: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FloorModOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11873:174: error: too many initializers for 'tflite::CreateFloorModOptions(flatbuffers::FlatBufferBuilder&, const tflite::FloorModOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const FloorModOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                              ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11878:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline RangeOptionsT *RangeOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11884:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void RangeOptions::UnPackTo(RangeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11889:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<RangeOptions> RangeOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const RangeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11893:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<RangeOptions> CreateRangeOptions(flatbuffers::FlatBufferBuilder &_fbb, const RangeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::RangeOptions> tflite::CreateRangeOptions(flatbuffers::FlatBufferBuilder&, const tflite::RangeOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11896:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const RangeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11896:171: error: too many initializers for 'tflite::CreateRangeOptions(flatbuffers::FlatBufferBuilder&, const tflite::RangeOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const RangeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11901:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline LeakyReluOptionsT *LeakyReluOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11907:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void LeakyReluOptions::UnPackTo(LeakyReluOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11913:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LeakyReluOptions> LeakyReluOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const LeakyReluOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11917:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<LeakyReluOptions> CreateLeakyReluOptions(flatbuffers::FlatBufferBuilder &_fbb, const LeakyReluOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::LeakyReluOptions> tflite::CreateLeakyReluOptions(flatbuffers::FlatBufferBuilder&, const tflite::LeakyReluOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11920:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LeakyReluOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11920:175: error: too many initializers for 'tflite::CreateLeakyReluOptions(flatbuffers::FlatBufferBuilder&, const tflite::LeakyReluOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const LeakyReluOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11927:87: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SquaredDifferenceOptionsT *SquaredDifferenceOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11933:98: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SquaredDifferenceOptions::UnPackTo(SquaredDifferenceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11938:179: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SquaredDifferenceOptions> SquaredDifferenceOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SquaredDifferenceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11942:179: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SquaredDifferenceOptions> CreateSquaredDifferenceOptions(flatbuffers::FlatBufferBuilder &_fbb, const SquaredDifferenceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SquaredDifferenceOptions> tflite::CreateSquaredDifferenceOptions(flatbuffers::FlatBufferBuilder&, const tflite::SquaredDifferenceOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11945:120: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SquaredDifferenceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11945:183: error: too many initializers for 'tflite::CreateSquaredDifferenceOptions(flatbuffers::FlatBufferBuilder&, const tflite::SquaredDifferenceOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SquaredDifferenceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                       ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11950:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline MirrorPadOptionsT *MirrorPadOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11956:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void MirrorPadOptions::UnPackTo(MirrorPadOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11962:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MirrorPadOptions> MirrorPadOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const MirrorPadOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11966:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MirrorPadOptions> CreateMirrorPadOptions(flatbuffers::FlatBufferBuilder &_fbb, const MirrorPadOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::MirrorPadOptions> tflite::CreateMirrorPadOptions(flatbuffers::FlatBufferBuilder&, const tflite::MirrorPadOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11969:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MirrorPadOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11969:175: error: too many initializers for 'tflite::CreateMirrorPadOptions(flatbuffers::FlatBufferBuilder&, const tflite::MirrorPadOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MirrorPadOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11976:65: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline UniqueOptionsT *UniqueOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11982:76: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void UniqueOptions::UnPackTo(UniqueOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11988:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<UniqueOptions> UniqueOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const UniqueOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11992:146: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<UniqueOptions> CreateUniqueOptions(flatbuffers::FlatBufferBuilder &_fbb, const UniqueOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::UniqueOptions> tflite::CreateUniqueOptions(flatbuffers::FlatBufferBuilder&, const tflite::UniqueOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11995:109: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const UniqueOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11995:172: error: too many initializers for 'tflite::CreateUniqueOptions(flatbuffers::FlatBufferBuilder&, const tflite::UniqueOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const UniqueOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                            ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12002:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ReverseV2OptionsT *ReverseV2Options::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12008:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ReverseV2Options::UnPackTo(ReverseV2OptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12013:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ReverseV2Options> ReverseV2Options::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ReverseV2OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12017:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ReverseV2Options> CreateReverseV2Options(flatbuffers::FlatBufferBuilder &_fbb, const ReverseV2OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ReverseV2Options> tflite::CreateReverseV2Options(flatbuffers::FlatBufferBuilder&, const tflite::ReverseV2OptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12020:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ReverseV2OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12020:175: error: too many initializers for 'tflite::CreateReverseV2Options(flatbuffers::FlatBufferBuilder&, const tflite::ReverseV2OptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ReverseV2OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12025:61: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline AddNOptionsT *AddNOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12031:72: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void AddNOptions::UnPackTo(AddNOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12036:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<AddNOptions> AddNOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const AddNOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12040:140: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<AddNOptions> CreateAddNOptions(flatbuffers::FlatBufferBuilder &_fbb, const AddNOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::AddNOptions> tflite::CreateAddNOptions(flatbuffers::FlatBufferBuilder&, const tflite::AddNOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12043:107: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AddNOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12043:170: error: too many initializers for 'tflite::CreateAddNOptions(flatbuffers::FlatBufferBuilder&, const tflite::AddNOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const AddNOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12048:69: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline GatherNdOptionsT *GatherNdOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12054:80: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void GatherNdOptions::UnPackTo(GatherNdOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12059:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<GatherNdOptions> GatherNdOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const GatherNdOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12063:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<GatherNdOptions> CreateGatherNdOptions(flatbuffers::FlatBufferBuilder &_fbb, const GatherNdOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::GatherNdOptions> tflite::CreateGatherNdOptions(flatbuffers::FlatBufferBuilder&, const tflite::GatherNdOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12066:111: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GatherNdOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12066:174: error: too many initializers for 'tflite::CreateGatherNdOptions(flatbuffers::FlatBufferBuilder&, const tflite::GatherNdOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const GatherNdOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                              ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12071:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline WhereOptionsT *WhereOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12077:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void WhereOptions::UnPackTo(WhereOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12082:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<WhereOptions> WhereOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const WhereOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12086:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<WhereOptions> CreateWhereOptions(flatbuffers::FlatBufferBuilder &_fbb, const WhereOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::WhereOptions> tflite::CreateWhereOptions(flatbuffers::FlatBufferBuilder&, const tflite::WhereOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12089:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const WhereOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12089:171: error: too many initializers for 'tflite::CreateWhereOptions(flatbuffers::FlatBufferBuilder&, const tflite::WhereOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const WhereOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12094:83: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ReverseSequenceOptionsT *ReverseSequenceOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12100:94: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ReverseSequenceOptions::UnPackTo(ReverseSequenceOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12107:173: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ReverseSequenceOptions> ReverseSequenceOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ReverseSequenceOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12111:173: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ReverseSequenceOptions> CreateReverseSequenceOptions(flatbuffers::FlatBufferBuilder &_fbb, const ReverseSequenceOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ReverseSequenceOptions> tflite::CreateReverseSequenceOptions(flatbuffers::FlatBufferBuilder&, const tflite::ReverseSequenceOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12114:118: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ReverseSequenceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12114:181: error: too many initializers for 'tflite::CreateReverseSequenceOptions(flatbuffers::FlatBufferBuilder&, const tflite::ReverseSequenceOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ReverseSequenceOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                     ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12123:73: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline MatrixDiagOptionsT *MatrixDiagOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12129:84: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void MatrixDiagOptions::UnPackTo(MatrixDiagOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12134:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MatrixDiagOptions> MatrixDiagOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const MatrixDiagOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12138:158: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MatrixDiagOptions> CreateMatrixDiagOptions(flatbuffers::FlatBufferBuilder &_fbb, const MatrixDiagOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::MatrixDiagOptions> tflite::CreateMatrixDiagOptions(flatbuffers::FlatBufferBuilder&, const tflite::MatrixDiagOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12141:113: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MatrixDiagOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12141:176: error: too many initializers for 'tflite::CreateMatrixDiagOptions(flatbuffers::FlatBufferBuilder&, const tflite::MatrixDiagOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MatrixDiagOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12146:69: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline QuantizeOptionsT *QuantizeOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12152:80: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void QuantizeOptions::UnPackTo(QuantizeOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12157:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<QuantizeOptions> QuantizeOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const QuantizeOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12161:152: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<QuantizeOptions> CreateQuantizeOptions(flatbuffers::FlatBufferBuilder &_fbb, const QuantizeOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::QuantizeOptions> tflite::CreateQuantizeOptions(flatbuffers::FlatBufferBuilder&, const tflite::QuantizeOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12164:111: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const QuantizeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12164:174: error: too many initializers for 'tflite::CreateQuantizeOptions(flatbuffers::FlatBufferBuilder&, const tflite::QuantizeOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const QuantizeOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                              ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12169:79: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline MatrixSetDiagOptionsT *MatrixSetDiagOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12175:90: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void MatrixSetDiagOptions::UnPackTo(MatrixSetDiagOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12180:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MatrixSetDiagOptions> MatrixSetDiagOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const MatrixSetDiagOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12184:167: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<MatrixSetDiagOptions> CreateMatrixSetDiagOptions(flatbuffers::FlatBufferBuilder &_fbb, const MatrixSetDiagOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::MatrixSetDiagOptions> tflite::CreateMatrixSetDiagOptions(flatbuffers::FlatBufferBuilder&, const tflite::MatrixSetDiagOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12187:116: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MatrixSetDiagOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12187:179: error: too many initializers for 'tflite::CreateMatrixSetDiagOptions(flatbuffers::FlatBufferBuilder&, const tflite::MatrixSetDiagOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MatrixSetDiagOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                   ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12192:57: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline IfOptionsT *IfOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12198:68: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void IfOptions::UnPackTo(IfOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                    ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12205:134: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<IfOptions> IfOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const IfOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12209:134: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<IfOptions> CreateIfOptions(flatbuffers::FlatBufferBuilder &_fbb, const IfOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::IfOptions> tflite::CreateIfOptions(flatbuffers::FlatBufferBuilder&, const tflite::IfOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12212:105: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const IfOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12212:168: error: too many initializers for 'tflite::CreateIfOptions(flatbuffers::FlatBufferBuilder&, const tflite::IfOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const IfOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                        ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12221:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline WhileOptionsT *WhileOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12227:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void WhileOptions::UnPackTo(WhileOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12234:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<WhileOptions> WhileOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const WhileOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12238:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<WhileOptions> CreateWhileOptions(flatbuffers::FlatBufferBuilder &_fbb, const WhileOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::WhileOptions> tflite::CreateWhileOptions(flatbuffers::FlatBufferBuilder&, const tflite::WhileOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12241:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const WhileOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12241:171: error: too many initializers for 'tflite::CreateWhileOptions(flatbuffers::FlatBufferBuilder&, const tflite::WhileOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const WhileOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12250:91: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline NonMaxSuppressionV4OptionsT *NonMaxSuppressionV4Options::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12256:102: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void NonMaxSuppressionV4Options::UnPackTo(NonMaxSuppressionV4OptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12261:185: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<NonMaxSuppressionV4Options> NonMaxSuppressionV4Options::Pack(flatbuffers::FlatBufferBuilder &_fbb, const NonMaxSuppressionV4OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12265:185: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<NonMaxSuppressionV4Options> CreateNonMaxSuppressionV4Options(flatbuffers::FlatBufferBuilder &_fbb, const NonMaxSuppressionV4OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::NonMaxSuppressionV4Options> tflite::CreateNonMaxSuppressionV4Options(flatbuffers::FlatBufferBuilder&, const tflite::NonMaxSuppressionV4OptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12268:122: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NonMaxSuppressionV4OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12268:185: error: too many initializers for 'tflite::CreateNonMaxSuppressionV4Options(flatbuffers::FlatBufferBuilder&, const tflite::NonMaxSuppressionV4OptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NonMaxSuppressionV4OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12273:91: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline NonMaxSuppressionV5OptionsT *NonMaxSuppressionV5Options::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12279:102: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void NonMaxSuppressionV5Options::UnPackTo(NonMaxSuppressionV5OptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12284:185: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<NonMaxSuppressionV5Options> NonMaxSuppressionV5Options::Pack(flatbuffers::FlatBufferBuilder &_fbb, const NonMaxSuppressionV5OptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12288:185: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<NonMaxSuppressionV5Options> CreateNonMaxSuppressionV5Options(flatbuffers::FlatBufferBuilder &_fbb, const NonMaxSuppressionV5OptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                                                         ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::NonMaxSuppressionV5Options> tflite::CreateNonMaxSuppressionV5Options(flatbuffers::FlatBufferBuilder&, const tflite::NonMaxSuppressionV5OptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12291:122: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NonMaxSuppressionV5OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12291:185: error: too many initializers for 'tflite::CreateNonMaxSuppressionV5Options(flatbuffers::FlatBufferBuilder&, const tflite::NonMaxSuppressionV5OptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const NonMaxSuppressionV5OptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12296:71: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ScatterNdOptionsT *ScatterNdOptions::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12302:82: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void ScatterNdOptions::UnPackTo(ScatterNdOptionsT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12307:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ScatterNdOptions> ScatterNdOptions::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ScatterNdOptionsT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12311:155: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<ScatterNdOptions> CreateScatterNdOptions(flatbuffers::FlatBufferBuilder &_fbb, const ScatterNdOptionsT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                                           ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::ScatterNdOptions> tflite::CreateScatterNdOptions(flatbuffers::FlatBufferBuilder&, const tflite::ScatterNdOptionsT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12314:112: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ScatterNdOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12314:175: error: too many initializers for 'tflite::CreateScatterNdOptions(flatbuffers::FlatBufferBuilder&, const tflite::ScatterNdOptionsT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ScatterNdOptionsT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12319:63: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline OperatorCodeT *OperatorCode::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12325:74: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void OperatorCode::UnPackTo(OperatorCodeT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12333:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<OperatorCode> OperatorCode::Pack(flatbuffers::FlatBufferBuilder &_fbb, const OperatorCodeT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12337:143: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<OperatorCode> CreateOperatorCode(flatbuffers::FlatBufferBuilder &_fbb, const OperatorCodeT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                               ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::OperatorCode> tflite::CreateOperatorCode(flatbuffers::FlatBufferBuilder&, const tflite::OperatorCodeT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12340:108: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const OperatorCodeT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12340:171: error: too many initializers for 'tflite::CreateOperatorCode(flatbuffers::FlatBufferBuilder&, const tflite::OperatorCodeT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const OperatorCodeT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                           ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12351:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline OperatorT *Operator::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12357:66: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void Operator::UnPackTo(OperatorT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12371:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Operator> Operator::Pack(flatbuffers::FlatBufferBuilder &_fbb, const OperatorT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12375:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Operator> CreateOperator(flatbuffers::FlatBufferBuilder &_fbb, const OperatorT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Operator> tflite::CreateOperator(flatbuffers::FlatBufferBuilder&, const tflite::OperatorT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12378:104: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const OperatorT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12378:167: error: too many initializers for 'tflite::CreateOperator(flatbuffers::FlatBufferBuilder&, const tflite::OperatorT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const OperatorT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                       ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12401:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline SubGraphT *SubGraph::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12407:66: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void SubGraph::UnPackTo(SubGraphT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In member function 'void tflite::SubGraph::UnPackTo(tflite::SubGraphT*, const int*) const':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12410:40: error: 'struct tflite::SubGraphT' has no member named 'tensors'

   { auto _e = tensors(); if (_e) { _o->tensors.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tensors[_i] = std::unique_ptr<TensorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                        ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12410:133: error: 'struct tflite::SubGraphT' has no member named 'tensors'

   { auto _e = tensors(); if (_e) { _o->tensors.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tensors[_i] = std::unique_ptr<TensorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                     ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12410:152: error: 'unique_ptr' is not a member of 'std'

   { auto _e = tensors(); if (_e) { _o->tensors.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tensors[_i] = std::unique_ptr<TensorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                        ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12410:152: note: suggested alternative: 'unique_copy'

   { auto _e = tensors(); if (_e) { _o->tensors.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tensors[_i] = std::unique_ptr<TensorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                        ^~~~~~~~~~

                                                                                                                                                        unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12410:170: error: expected primary-expression before '>' token

   { auto _e = tensors(); if (_e) { _o->tensors.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->tensors[_i] = std::unique_ptr<TensorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12413:42: error: 'struct tflite::SubGraphT' has no member named 'operators'

   { auto _e = operators(); if (_e) { _o->operators.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operators[_i] = std::unique_ptr<OperatorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                          ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12413:137: error: 'struct tflite::SubGraphT' has no member named 'operators'

   { auto _e = operators(); if (_e) { _o->operators.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operators[_i] = std::unique_ptr<OperatorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                         ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12413:158: error: 'unique_ptr' is not a member of 'std'

   { auto _e = operators(); if (_e) { _o->operators.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operators[_i] = std::unique_ptr<OperatorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                              ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12413:158: note: suggested alternative: 'unique_copy'

   { auto _e = operators(); if (_e) { _o->operators.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operators[_i] = std::unique_ptr<OperatorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                              ^~~~~~~~~~

                                                                                                                                                              unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12413:178: error: expected primary-expression before '>' token

   { auto _e = operators(); if (_e) { _o->operators.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operators[_i] = std::unique_ptr<OperatorT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                                                  ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12417:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SubGraph> SubGraph::Pack(flatbuffers::FlatBufferBuilder &_fbb, const SubGraphT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12421:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<SubGraph> CreateSubGraph(flatbuffers::FlatBufferBuilder &_fbb, const SubGraphT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SubGraph> tflite::CreateSubGraph(flatbuffers::FlatBufferBuilder&, const tflite::SubGraphT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12424:104: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SubGraphT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12424:167: error: too many initializers for 'tflite::CreateSubGraph(flatbuffers::FlatBufferBuilder&, const tflite::SubGraphT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const SubGraphT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                       ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12425:23: error: 'const struct tflite::SubGraphT' has no member named 'tensors'

   auto _tensors = _o->tensors.size() ? _fbb.CreateVector<flatbuffers::Offset<Tensor>> (_o->tensors.size(), [](size_t i, _VectorArgs *__va) { return CreateTensor(*__va->__fbb, __va->__o->tensors[i].get(), __va->__rehasher); }, &_va ) : 0;

                       ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12425:92: error: 'const struct tflite::SubGraphT' has no member named 'tensors'

   auto _tensors = _o->tensors.size() ? _fbb.CreateVector<flatbuffers::Offset<Tensor>> (_o->tensors.size(), [](size_t i, _VectorArgs *__va) { return CreateTensor(*__va->__fbb, __va->__o->tensors[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                            ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In lambda function:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12425:187: error: 'const struct tflite::SubGraphT' has no member named 'tensors'

   auto _tensors = _o->tensors.size() ? _fbb.CreateVector<flatbuffers::Offset<Tensor>> (_o->tensors.size(), [](size_t i, _VectorArgs *__va) { return CreateTensor(*__va->__fbb, __va->__o->tensors[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                           ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12425:211: error: 'struct tflite::CreateSubGraph(flatbuffers::FlatBufferBuilder&, const tflite::SubGraphT*, const int*)::_VectorArgs' has no member named '__rehasher'

   auto _tensors = _o->tensors.size() ? _fbb.CreateVector<flatbuffers::Offset<Tensor>> (_o->tensors.size(), [](size_t i, _VectorArgs *__va) { return CreateTensor(*__va->__fbb, __va->__o->tensors[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                                   ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::SubGraph> tflite::CreateSubGraph(flatbuffers::FlatBufferBuilder&, const tflite::SubGraphT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12428:25: error: 'const struct tflite::SubGraphT' has no member named 'operators'

   auto _operators = _o->operators.size() ? _fbb.CreateVector<flatbuffers::Offset<Operator>> (_o->operators.size(), [](size_t i, _VectorArgs *__va) { return CreateOperator(*__va->__fbb, __va->__o->operators[i].get(), __va->__rehasher); }, &_va ) : 0;

                         ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12428:98: error: 'const struct tflite::SubGraphT' has no member named 'operators'

   auto _operators = _o->operators.size() ? _fbb.CreateVector<flatbuffers::Offset<Operator>> (_o->operators.size(), [](size_t i, _VectorArgs *__va) { return CreateOperator(*__va->__fbb, __va->__o->operators[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                  ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In lambda function:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12428:197: error: 'const struct tflite::SubGraphT' has no member named 'operators'

   auto _operators = _o->operators.size() ? _fbb.CreateVector<flatbuffers::Offset<Operator>> (_o->operators.size(), [](size_t i, _VectorArgs *__va) { return CreateOperator(*__va->__fbb, __va->__o->operators[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                     ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12428:223: error: 'struct tflite::CreateSubGraph(flatbuffers::FlatBufferBuilder&, const tflite::SubGraphT*, const int*)::_VectorArgs' has no member named '__rehasher'

   auto _operators = _o->operators.size() ? _fbb.CreateVector<flatbuffers::Offset<Operator>> (_o->operators.size(), [](size_t i, _VectorArgs *__va) { return CreateOperator(*__va->__fbb, __va->__o->operators[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                                               ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12439:51: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline BufferT *Buffer::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12445:62: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void Buffer::UnPackTo(BufferT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                              ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12451:125: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Buffer> Buffer::Pack(flatbuffers::FlatBufferBuilder &_fbb, const BufferT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12455:125: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Buffer> CreateBuffer(flatbuffers::FlatBufferBuilder &_fbb, const BufferT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Buffer> tflite::CreateBuffer(flatbuffers::FlatBufferBuilder&, const tflite::BufferT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12458:102: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BufferT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                      ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12458:165: error: too many initializers for 'tflite::CreateBuffer(flatbuffers::FlatBufferBuilder&, const tflite::BufferT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const BufferT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                     ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12465:55: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline MetadataT *Metadata::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                       ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12471:66: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void Metadata::UnPackTo(MetadataT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                                  ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12478:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Metadata> Metadata::Pack(flatbuffers::FlatBufferBuilder &_fbb, const MetadataT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12482:131: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Metadata> CreateMetadata(flatbuffers::FlatBufferBuilder &_fbb, const MetadataT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Metadata> tflite::CreateMetadata(flatbuffers::FlatBufferBuilder&, const tflite::MetadataT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12485:104: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MetadataT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                        ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12485:167: error: too many initializers for 'tflite::CreateMetadata(flatbuffers::FlatBufferBuilder&, const tflite::MetadataT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const MetadataT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                       ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12494:49: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline ModelT *Model::UnPack(const flatbuffers::resolver_function_t *_resolver) const {

                                                 ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12500:60: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void Model::UnPackTo(ModelT *_o, const flatbuffers::resolver_function_t *_resolver) const {

                                                            ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In member function 'void tflite::Model::UnPackTo(tflite::ModelT*, const int*) const':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12504:47: error: 'struct tflite::ModelT' has no member named 'operator_codes'

   { auto _e = operator_codes(); if (_e) { _o->operator_codes.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operator_codes[_i] = std::unique_ptr<OperatorCodeT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                               ^~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12504:147: error: 'struct tflite::ModelT' has no member named 'operator_codes'

   { auto _e = operator_codes(); if (_e) { _o->operator_codes.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operator_codes[_i] = std::unique_ptr<OperatorCodeT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                   ^~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12504:173: error: 'unique_ptr' is not a member of 'std'

   { auto _e = operator_codes(); if (_e) { _o->operator_codes.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operator_codes[_i] = std::unique_ptr<OperatorCodeT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                                             ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12504:173: note: suggested alternative: 'unique_copy'

   { auto _e = operator_codes(); if (_e) { _o->operator_codes.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operator_codes[_i] = std::unique_ptr<OperatorCodeT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                                             ^~~~~~~~~~

                                                                                                                                                                             unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12504:197: error: expected primary-expression before '>' token

   { auto _e = operator_codes(); if (_e) { _o->operator_codes.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->operator_codes[_i] = std::unique_ptr<OperatorCodeT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                                                                     ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12505:42: error: 'struct tflite::ModelT' has no member named 'subgraphs'

   { auto _e = subgraphs(); if (_e) { _o->subgraphs.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->subgraphs[_i] = std::unique_ptr<SubGraphT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                          ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12505:137: error: 'struct tflite::ModelT' has no member named 'subgraphs'

   { auto _e = subgraphs(); if (_e) { _o->subgraphs.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->subgraphs[_i] = std::unique_ptr<SubGraphT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                         ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12505:158: error: 'unique_ptr' is not a member of 'std'

   { auto _e = subgraphs(); if (_e) { _o->subgraphs.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->subgraphs[_i] = std::unique_ptr<SubGraphT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                              ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12505:158: note: suggested alternative: 'unique_copy'

   { auto _e = subgraphs(); if (_e) { _o->subgraphs.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->subgraphs[_i] = std::unique_ptr<SubGraphT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                              ^~~~~~~~~~

                                                                                                                                                              unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12505:178: error: expected primary-expression before '>' token

   { auto _e = subgraphs(); if (_e) { _o->subgraphs.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->subgraphs[_i] = std::unique_ptr<SubGraphT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                                                  ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12507:40: error: 'struct tflite::ModelT' has no member named 'buffers'

   { auto _e = buffers(); if (_e) { _o->buffers.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->buffers[_i] = std::unique_ptr<BufferT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                        ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12507:133: error: 'struct tflite::ModelT' has no member named 'buffers'

   { auto _e = buffers(); if (_e) { _o->buffers.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->buffers[_i] = std::unique_ptr<BufferT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                     ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12507:152: error: 'unique_ptr' is not a member of 'std'

   { auto _e = buffers(); if (_e) { _o->buffers.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->buffers[_i] = std::unique_ptr<BufferT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                        ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12507:152: note: suggested alternative: 'unique_copy'

   { auto _e = buffers(); if (_e) { _o->buffers.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->buffers[_i] = std::unique_ptr<BufferT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                        ^~~~~~~~~~

                                                                                                                                                        unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12507:170: error: expected primary-expression before '>' token

   { auto _e = buffers(); if (_e) { _o->buffers.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->buffers[_i] = std::unique_ptr<BufferT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                                          ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12509:41: error: 'struct tflite::ModelT' has no member named 'metadata'

   { auto _e = metadata(); if (_e) { _o->metadata.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->metadata[_i] = std::unique_ptr<MetadataT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                         ^~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12509:135: error: 'struct tflite::ModelT' has no member named 'metadata'

   { auto _e = metadata(); if (_e) { _o->metadata.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->metadata[_i] = std::unique_ptr<MetadataT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                       ^~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12509:155: error: 'unique_ptr' is not a member of 'std'

   { auto _e = metadata(); if (_e) { _o->metadata.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->metadata[_i] = std::unique_ptr<MetadataT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                           ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12509:155: note: suggested alternative: 'unique_copy'

   { auto _e = metadata(); if (_e) { _o->metadata.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->metadata[_i] = std::unique_ptr<MetadataT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                           ^~~~~~~~~~

                                                                                                                                                           unique_copy

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12509:175: error: expected primary-expression before '>' token

   { auto _e = metadata(); if (_e) { _o->metadata.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->metadata[_i] = std::unique_ptr<MetadataT>(_e->Get(_i)->UnPack(_resolver)); } } };

                                                                                                                                                                               ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12512:122: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Model> Model::Pack(flatbuffers::FlatBufferBuilder &_fbb, const ModelT* _o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12516:122: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<Model> CreateModel(flatbuffers::FlatBufferBuilder &_fbb, const ModelT *_o, const flatbuffers::rehasher_function_t *_rehasher) {

                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Model> tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12519:101: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ModelT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12519:164: error: too many initializers for 'tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)::_VectorArgs'

   struct _VectorArgs { flatbuffers::FlatBufferBuilder *__fbb; const ModelT* __o; const flatbuffers::rehasher_function_t *__rehasher; } _va = { &_fbb, _o, _rehasher}; (void)_va;

                                                                                                                                                                    ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12521:30: error: 'const struct tflite::ModelT' has no member named 'operator_codes'

   auto _operator_codes = _o->operator_codes.size() ? _fbb.CreateVector<flatbuffers::Offset<OperatorCode>> (_o->operator_codes.size(), [](size_t i, _VectorArgs *__va) { return CreateOperatorCode(*__va->__fbb, __va->__o->operator_codes[i].get(), __va->__rehasher); }, &_va ) : 0;

                              ^~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12521:112: error: 'const struct tflite::ModelT' has no member named 'operator_codes'

   auto _operator_codes = _o->operator_codes.size() ? _fbb.CreateVector<flatbuffers::Offset<OperatorCode>> (_o->operator_codes.size(), [](size_t i, _VectorArgs *__va) { return CreateOperatorCode(*__va->__fbb, __va->__o->operator_codes[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                ^~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In lambda function:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12521:220: error: 'const struct tflite::ModelT' has no member named 'operator_codes'

   auto _operator_codes = _o->operator_codes.size() ? _fbb.CreateVector<flatbuffers::Offset<OperatorCode>> (_o->operator_codes.size(), [](size_t i, _VectorArgs *__va) { return CreateOperatorCode(*__va->__fbb, __va->__o->operator_codes[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                                            ^~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12521:251: error: 'struct tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)::_VectorArgs' has no member named '__rehasher'

   auto _operator_codes = _o->operator_codes.size() ? _fbb.CreateVector<flatbuffers::Offset<OperatorCode>> (_o->operator_codes.size(), [](size_t i, _VectorArgs *__va) { return CreateOperatorCode(*__va->__fbb, __va->__o->operator_codes[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                                                                           ^~~~~~~~~~

In file included from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:13:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Model> tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12522:25: error: 'const struct tflite::ModelT' has no member named 'subgraphs'

   auto _subgraphs = _o->subgraphs.size() ? _fbb.CreateVector<flatbuffers::Offset<SubGraph>> (_o->subgraphs.size(), [](size_t i, _VectorArgs *__va) { return CreateSubGraph(*__va->__fbb, __va->__o->subgraphs[i].get(), __va->__rehasher); }, &_va ) : 0;

                         ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12522:98: error: 'const struct tflite::ModelT' has no member named 'subgraphs'

   auto _subgraphs = _o->subgraphs.size() ? _fbb.CreateVector<flatbuffers::Offset<SubGraph>> (_o->subgraphs.size(), [](size_t i, _VectorArgs *__va) { return CreateSubGraph(*__va->__fbb, __va->__o->subgraphs[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                  ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In lambda function:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12522:197: error: 'const struct tflite::ModelT' has no member named 'subgraphs'

   auto _subgraphs = _o->subgraphs.size() ? _fbb.CreateVector<flatbuffers::Offset<SubGraph>> (_o->subgraphs.size(), [](size_t i, _VectorArgs *__va) { return CreateSubGraph(*__va->__fbb, __va->__o->subgraphs[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                     ^~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12522:223: error: 'struct tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)::_VectorArgs' has no member named '__rehasher'

   auto _subgraphs = _o->subgraphs.size() ? _fbb.CreateVector<flatbuffers::Offset<SubGraph>> (_o->subgraphs.size(), [](size_t i, _VectorArgs *__va) { return CreateSubGraph(*__va->__fbb, __va->__o->subgraphs[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                                               ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Model> tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12524:23: error: 'const struct tflite::ModelT' has no member named 'buffers'

   auto _buffers = _o->buffers.size() ? _fbb.CreateVector<flatbuffers::Offset<Buffer>> (_o->buffers.size(), [](size_t i, _VectorArgs *__va) { return CreateBuffer(*__va->__fbb, __va->__o->buffers[i].get(), __va->__rehasher); }, &_va ) : 0;

                       ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12524:92: error: 'const struct tflite::ModelT' has no member named 'buffers'

   auto _buffers = _o->buffers.size() ? _fbb.CreateVector<flatbuffers::Offset<Buffer>> (_o->buffers.size(), [](size_t i, _VectorArgs *__va) { return CreateBuffer(*__va->__fbb, __va->__o->buffers[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                            ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In lambda function:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12524:187: error: 'const struct tflite::ModelT' has no member named 'buffers'

   auto _buffers = _o->buffers.size() ? _fbb.CreateVector<flatbuffers::Offset<Buffer>> (_o->buffers.size(), [](size_t i, _VectorArgs *__va) { return CreateBuffer(*__va->__fbb, __va->__o->buffers[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                           ^~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12524:211: error: 'struct tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)::_VectorArgs' has no member named '__rehasher'

   auto _buffers = _o->buffers.size() ? _fbb.CreateVector<flatbuffers::Offset<Buffer>> (_o->buffers.size(), [](size_t i, _VectorArgs *__va) { return CreateBuffer(*__va->__fbb, __va->__o->buffers[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                                   ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In function 'flatbuffers::Offset<tflite::Model> tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)':

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12526:24: error: 'const struct tflite::ModelT' has no member named 'metadata'

   auto _metadata = _o->metadata.size() ? _fbb.CreateVector<flatbuffers::Offset<Metadata>> (_o->metadata.size(), [](size_t i, _VectorArgs *__va) { return CreateMetadata(*__va->__fbb, __va->__o->metadata[i].get(), __va->__rehasher); }, &_va ) : 0;

                        ^~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12526:96: error: 'const struct tflite::ModelT' has no member named 'metadata'

   auto _metadata = _o->metadata.size() ? _fbb.CreateVector<flatbuffers::Offset<Metadata>> (_o->metadata.size(), [](size_t i, _VectorArgs *__va) { return CreateMetadata(*__va->__fbb, __va->__o->metadata[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                ^~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: In lambda function:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12526:194: error: 'const struct tflite::ModelT' has no member named 'metadata'

   auto _metadata = _o->metadata.size() ? _fbb.CreateVector<flatbuffers::Offset<Metadata>> (_o->metadata.size(), [](size_t i, _VectorArgs *__va) { return CreateMetadata(*__va->__fbb, __va->__o->metadata[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                  ^~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12526:219: error: 'struct tflite::CreateModel(flatbuffers::FlatBufferBuilder&, const tflite::ModelT*, const int*)::_VectorArgs' has no member named '__rehasher'

   auto _metadata = _o->metadata.size() ? _fbb.CreateVector<flatbuffers::Offset<Metadata>> (_o->metadata.size(), [](size_t i, _VectorArgs *__va) { return CreateMetadata(*__va->__fbb, __va->__o->metadata[i].get(), __va->__rehasher); }, &_va ) : 0;

                                                                                                                                                                                                                           ^~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h: At global scope:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12563:109: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void *QuantizationDetailsUnion::UnPack(const void *obj, QuantizationDetails type, const flatbuffers::resolver_function_t *resolver) {

                                                                                                             ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:12573:122: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<void> QuantizationDetailsUnion::Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher) const {

                                                                                                                          ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:13016:99: error: 'resolver_function_t' in namespace 'flatbuffers' does not name a type

 inline void *BuiltinOptionsUnion::UnPack(const void *obj, BuiltinOptions type, const flatbuffers::resolver_function_t *resolver) {

                                                                                                   ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:13410:117: error: 'rehasher_function_t' in namespace 'flatbuffers' does not name a type

 inline flatbuffers::Offset<void> BuiltinOptionsUnion::Pack(flatbuffers::FlatBufferBuilder &_fbb, const flatbuffers::rehasher_function_t *_rehasher) const {

                                                                                                                     ^~~~~~~~~~~~~~~~~~~

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:14735:13: error: 'unique_ptr' in namespace 'std' does not name a template type

 inline std::unique_ptr<ModelT> UnPackModel(

             ^~~~~~~~~~

exit status 1
Error compiling for board Adafruit Bluefruit Feather nRF52832.

This report would have more information with
"Show verbose output during compilation"
option enabled in File -> Preferences.
````
