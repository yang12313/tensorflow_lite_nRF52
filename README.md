# tensorflow_lite_nRF52
For debug

Please manually download the libraries associated to the file to complete the compilation. 

### Error log is shown below:
````
Arduino: 1.8.9 (Windows 10), Board: "Adafruit Bluefruit Feather nRF52832, 0.2.12 SoftDevice s132 6.1.1, Level 0 (Release)"

In file included from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\char_traits.h:39:0,

                 from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\ios:40,

                 from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\ostream:38,

                 from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\iostream:39,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:16:

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algobase.h:243:56: error: macro "min" passed 3 arguments, but takes just 2

     min(const _Tp& __a, const _Tp& __b, _Compare __comp)

                                                        ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algobase.h:265:56: error: macro "max" passed 3 arguments, but takes just 2

     max(const _Tp& __a, const _Tp& __b, _Compare __comp)

                                                        ^

In file included from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algo.h:60:0,

                 from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\algorithm:62,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/base.h:45,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:21,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:21:

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\algorithmfwd.h:375:41: error: macro "max" passed 3 arguments, but takes just 2

     max(const _Tp&, const _Tp&, _Compare);

                                         ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\algorithmfwd.h:388:41: error: macro "min" passed 3 arguments, but takes just 2

     min(const _Tp&, const _Tp&, _Compare);

                                         ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\algorithmfwd.h:416:30: error: macro "min" requires 2 arguments, but only 1 given

     min(initializer_list<_Tp>);

                              ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\algorithmfwd.h:426:30: error: macro "max" requires 2 arguments, but only 1 given

     max(initializer_list<_Tp>);

                              ^

In file included from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:35:0,

                 from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algo.h:66,

                 from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\algorithm:62,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/base.h:45,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:21,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:21:

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:317:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return _Tp(); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:321:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return _Tp(); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:388:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return false; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:391:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return true; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:395:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:457:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return __glibcxx_min(char); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:460:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __glibcxx_max(char); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:464:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:524:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return -__SCHAR_MAX__ - 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:527:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __SCHAR_MAX__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:531:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:594:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return 0; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:597:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __SCHAR_MAX__ * 2U + 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:601:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:667:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return __glibcxx_min (wchar_t); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:670:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __glibcxx_max (wchar_t); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:674:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:736:11: error: macro "min" requires 2 arguments, but only 1 given

       min() noexcept { return __glibcxx_min (char16_t); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:739:11: error: macro "max" requires 2 arguments, but only 1 given

       max() noexcept { return __glibcxx_max (char16_t); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:742:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:797:11: error: macro "min" requires 2 arguments, but only 1 given

       min() noexcept { return __glibcxx_min (char32_t); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:800:11: error: macro "max" requires 2 arguments, but only 1 given

       max() noexcept { return __glibcxx_max (char32_t); }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:803:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:859:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return -__SHRT_MAX__ - 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:862:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __SHRT_MAX__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:866:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:926:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return 0; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:929:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __SHRT_MAX__ * 2U + 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:933:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:999:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return -__INT_MAX__ - 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1002:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __INT_MAX__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1006:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1066:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return 0; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1069:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __INT_MAX__ * 2U + 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1073:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1138:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return -__LONG_MAX__ - 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1141:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __LONG_MAX__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1145:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1205:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return 0; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1208:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __LONG_MAX__ * 2UL + 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1212:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1278:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return -__LONG_LONG_MAX__ - 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1281:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __LONG_LONG_MAX__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1285:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1348:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return 0; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1351:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __LONG_LONG_MAX__ * 2ULL + 1; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1355:38: error: macro "min" requires 2 arguments, but only 1 given

       lowest() noexcept { return min(); }

                                      ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1599:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return __FLT_MIN__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1602:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __FLT_MAX__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1674:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return __DBL_MIN__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1677:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __DBL_MAX__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1749:11: error: macro "min" requires 2 arguments, but only 1 given

       min() _GLIBCXX_USE_NOEXCEPT { return __LDBL_MIN__; }

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\limits:1752:11: error: macro "max" requires 2 arguments, but only 1 given

       max() _GLIBCXX_USE_NOEXCEPT { return __LDBL_MAX__; }

           ^

In file included from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algo.h:66:0,

                 from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\algorithm:62,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/base.h:45,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:21,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:21:

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:76:56: error: macro "max" requires 2 arguments, but only 1 given

      _IntType __b = std::numeric_limits<_IntType>::max())

                                                        ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:109:57: error: macro "max" requires 2 arguments, but only 1 given

       _IntType __b = std::numeric_limits<_IntType>::max())

                                                         ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:153:11: error: macro "min" requires 2 arguments, but only 1 given

       min() const

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:160:11: error: macro "max" requires 2 arguments, but only 1 given

       max() const

           ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:231:40: error: macro "min" requires 2 arguments, but only 1 given

  const __uctype __urngmin = __urng.min();

                                        ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:232:40: error: macro "max" requires 2 arguments, but only 1 given

  const __uctype __urngmax = __urng.max();

                                        ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:300:40: error: macro "min" requires 2 arguments, but only 1 given

  const __uctype __urngmin = __urng.min();

                                        ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\uniform_int_dist.h:301:40: error: macro "max" requires 2 arguments, but only 1 given

  const __uctype __urngmax = __urng.max();

                                        ^

In file included from c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\algorithm:62:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/base.h:45,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/third_party/flatbuffers/include/flatbuffers/flatbuffers.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:21,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:21:

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algo.h:3450:34: error: macro "min" requires 2 arguments, but only 1 given

     min(initializer_list<_Tp> __l)

                                  ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algo.h:3462:34: error: macro "max" requires 2 arguments, but only 1 given

     max(initializer_list<_Tp> __l)

                                  ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algo.h:3815:45: error: macro "max" requires 2 arguments, but only 1 given

       const __uc_type __urngrange = __g.max() - __g.min();

                                             ^

c:\users\neoya\appdata\local\arduino15\packages\arduino\tools\arm-none-eabi-gcc\7-2017q4\arm-none-eabi\include\c++\7.2.1\bits\stl_algo.h:3815:57: error: macro "min" requires 2 arguments, but only 1 given

       const __uc_type __urngrange = __g.max() - __g.min();

                                                         ^

In file included from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/core/api/op_resolver.h:20:0,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/micro_mutable_op_resolver.h:18,

                 from C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/experimental/micro/kernels/all_ops_resolver.h:16,

                 from D:\Phenoma\Gesture Detection\Gesture-Recognition-master\adafruit\sketch_nov08a\sketch_nov08a.ino:21:

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2717:41: error: macro "min" requires 2 arguments, but only 1 given

   const flatbuffers::Vector<float> *min() const {

                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2720:41: error: macro "max" requires 2 arguments, but only 1 given

   const flatbuffers::Vector<float> *max() const {

                                         ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2745:38: error: macro "min" requires 2 arguments, but only 1 given

            verifier.VerifyVector(min()) &&

                                      ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:2747:38: error: macro "max" requires 2 arguments, but only 1 given

            verifier.VerifyVector(max()) &&

                                      ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6760:17: error: macro "min" requires 2 arguments, but only 1 given

       : min(0.0f),

                 ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6761:17: error: macro "max" requires 2 arguments, but only 1 given

         max(0.0f),

                 ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6775:13: error: macro "min" requires 2 arguments, but only 1 given

   float min() const {

             ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:6778:13: error: macro "max" requires 2 arguments, but only 1 given

   float max() const {

             ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9626:19: error: macro "min" requires 2 arguments, but only 1 given

   { auto _e = min(); if (_e) { _o->min.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->min[_i] = _e->Get(_i); } } };

                   ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:9627:19: error: macro "max" requires 2 arguments, but only 1 given

   { auto _e = max(); if (_e) { _o->max.resize(_e->size()); for (flatbuffers::uoffset_t _i = 0; _i < _e->size(); _i++) { _o->max[_i] = _e->Get(_i); } } };

                   ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11470:19: error: macro "min" requires 2 arguments, but only 1 given

   { auto _e = min(); _o->min = _e; };

                   ^

C:\Users\neoya\Documents\Arduino\libraries\Arduino_TensorFlowLite\src/tensorflow/lite/schema/schema_generated.h:11471:19: error: macro "max" requires 2 arguments, but only 1 given

   { auto _e = max(); _o->max = _e; };

                   ^

exit status 1
Error compiling for board Adafruit Bluefruit Feather nRF52832.

This report would have more information with
"Show verbose output during compilation"
option enabled in File -> Preferences.`
````
