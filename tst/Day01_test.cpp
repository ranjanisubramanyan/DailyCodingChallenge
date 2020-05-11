#include "Day01.h"
#include "gtest/gtest.h"

TEST(CheckArrayForKSumTest, day01test)
{
    CheckArrayForKSum check_test;
    EXPECT_TRUE(check_test.find_sum({10, 15, 3, 7}, 17, 4));
    EXPECT_FALSE(check_test.find_sum({1, 2, 3, 4}, 0, 4));
    EXPECT_TRUE(check_test.find_sum({1, 3, 5, 7, 9, 11, 13, 15, 17, 19}, 10, 10));
    EXPECT_FALSE(check_test.find_sum({2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 13, 10));

}