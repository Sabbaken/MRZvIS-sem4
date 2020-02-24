#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../BinaryCalculator.h"
#include "vector"

using testing::Eq;

TEST(BinaryCalculatorTests, dec_number_to_bin_conversion_test) {
    BinaryCalculator calc = BinaryCalculator();
    std::vector<int> _1_bin = {1, 0, 0, 0};
    std::vector<int> _2_bin = {0, 1, 0, 0};
    std::vector<int> _4_bin = {0, 0, 1, 0};
    std::vector<int> _5_bin = {1, 0, 1, 0};
    std::vector<int> _6_bin = {0, 1, 1, 0};

    EXPECT_EQ(_1_bin, calc._10_to_2_(1));
    EXPECT_EQ(_2_bin, calc._10_to_2_(2));
    EXPECT_EQ(_4_bin, calc._10_to_2_(4));
    EXPECT_EQ(_5_bin, calc._10_to_2_(5));
    EXPECT_EQ(_6_bin, calc._10_to_2_(6));
}

TEST(BinaryComputerTests, bin_to_additional_code_conversion_test) {
    BinaryCalculator calc = BinaryCalculator();

    std::vector<int> _1_bin = {1, 0, 0, 0};;
    std::vector<int> _4_bin = {0, 0, 1, 0};;
    std::vector<int> _1_bin_additional_code = {1, 0, 0, 0};;
    std::vector<int> _4_bin_additional_code = {0, 0, 1, 0};;

    EXPECT_EQ(_1_bin_additional_code, calc._2_to_additional_code(_1_bin));
    EXPECT_EQ(_4_bin_additional_code, calc._2_to_additional_code(_4_bin));
}


TEST(BinaryComputerTests, bin_addition_test) {
    BinaryCalculator calc = BinaryCalculator();

    std::vector<int> _1_bin = {1, 0, 0, 0};
    std::vector<int> _2_bin = {0, 1, 0, 0};
    std::vector<int> _3_bin = {1, 1, 0, 0};
    std::vector<int> _4_bin = {0, 0, 1, 0};
    std::vector<int> _5_bin = {1, 0, 1, 0};
    std::vector<int> _6_bin = {0, 1, 1, 0};

    EXPECT_EQ(_6_bin, calc.binaryAddition(_3_bin, _3_bin));
    EXPECT_EQ(_6_bin, calc.binaryAddition(_4_bin, _2_bin));
    EXPECT_EQ(_5_bin, calc.binaryAddition(_4_bin, _1_bin));
    ASSERT_EQ(_4_bin, calc.binaryAddition(_2_bin, _2_bin));
}