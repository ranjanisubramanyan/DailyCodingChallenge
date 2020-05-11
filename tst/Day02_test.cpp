#include "Day02.h"
#include "gtest/gtest.h"

TEST(MultiplyArrayTest, day02test)
{
    MultiplyArray multiply_array_test;
    std::vector <int> output_array;
    std::vector <int> expected_array = {120, 60, 40, 30, 24};
    output_array = multiply_array_test.multiply_array({1, 2, 3, 4, 5});
    for(int i = 0; i < output_array.size(); i++)
    {
        EXPECT_EQ(output_array.at(i), expected_array.at(i));
    }
    output_array = multiply_array_test.multiply_array({1, 2, 3});
    expected_array = {6, 3, 2};
    for(int i = 0; i < output_array.size(); i++)
    {
        EXPECT_EQ(output_array.at(i), expected_array.at(i));
    }
}