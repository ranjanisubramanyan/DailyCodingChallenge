#include "Day03.h"
#include "gtest/gtest.h"

TEST(FindLeastPositiveIntegerTest, day03test)
{
    FindLeastPositiveInteger find_least_;
    int output_array;
    output_array = find_least_.least_positive_integer({1, 2, 3, 4, 5});
    EXPECT_EQ(output_array, 6);
    
    output_array = find_least_.least_positive_integer({3, 4, -1, 1});
    EXPECT_EQ(output_array,2);
    
    
    output_array = find_least_.least_positive_integer({1, 2, 0});
    EXPECT_EQ(output_array, 3);
    
}