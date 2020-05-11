#include "Day05.h"
#include "gtest/gtest.h"

TEST(FindLargestSumTest, day05test)
{
    FindLargestSum find_;
    int output_;
    output_ = find_.findSum({2, 4, 6, 2, 5});
    EXPECT_EQ(output_, 13);
    output_ = find_.findSum({5, 1, 1, 5});
    EXPECT_EQ(output_, 10);
}