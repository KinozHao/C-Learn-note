cmake_minimum_required(VERSION 3.23)
project(Ccode C)

set(CMAKE_C_STANDARD 99)

add_executable(Demo0 a_basic/HelloWorld.c)
add_executable(Demo1 a_basic/WaterFlower.c)
add_executable(Demo2 a_basic/DataType.c)
add_executable(Demo3 a_basic/Operator.c)
add_executable(Demo4 a_basic/CircleFormat.c)
add_executable(Demo5 a_basic/SwitchUs.c)
add_executable(Demo6 a_basic/GotoUs.c)
add_executable(Demo7 b_shuzu/ArraysUs.c)
add_executable(Demo8 b_shuzu/ArraysUsII.c)
add_executable(Demo9 b_shuzu/ExchangeParam.c)
add_executable(Array1 b_shuzu/TwoArrays.c)
add_executable(Array2 b_shuzu/BubbleSort.c)
add_executable(Array3 b_shuzu/BubbleSortII.c)
add_executable(Func1 c_func/FuncBasic.c)


