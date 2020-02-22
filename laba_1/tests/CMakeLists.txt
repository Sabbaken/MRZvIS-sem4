cmake_minimum_required(VERSION 3.15)

set(This laba_1_tests)

set(Sources
        test1.cpp
        )

add_executable(${This} ${Sources})
target_link_libraries(${This} PUBLIC
        gtest_main
        laba_1
        )

add_test(
        NAME ${This}
        COMMAND ${This}
)