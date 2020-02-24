cmake_minimum_required(VERSION 3.15)
project(Laba1)

set(CMAKE_CXX_STANDARD 17)
add_subdirectory(lib/googletest)
include_directories(lib/googletest/googletest/include)
include_directories(lib/googletest/googlemock/include)

set(SOURCE_FILES main.cpp
        Tests/test.cpp
        BinaryCalculator.cpp
        BinaryCalculator.h
        Pipeline.cpp
        Pipeline.h
        Visualizer.cpp
        Visualizer.h)

add_executable(Laba1 ${SOURCE_FILES})
target_link_libraries(Laba1 gtest gtest_main)