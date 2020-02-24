cmake_minimum_required(VERSION 3.15)

set(This laba_1)
project(${This})

#ToDo настроить управление этим параметром из Clion
#ПАЖАЛУСТА сделайте это за меня
set(RUN_TESTS true)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(Headers
        Pipeline.h
        BinaryCalculator.h
        Visualizer.h
        )

set(Sources
        main.cpp
        Pipeline.cpp
        BinaryCalculator.cpp
        Visualizer.cpp
        )

if(${RUN_TESTS})
    add_executable(${Sources} ${Headers})
    enable_testing()
    add_subdirectory(lib/googletest)
    add_library(${This} STATIC ${Sources} ${Headers})
    add_subdirectory(tests)
endif ()

if (NOT ${RUN_TESTS})
    add_executable(${This} ${Sources} ${Headers})
endif ()
