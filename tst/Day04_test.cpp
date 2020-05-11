#include "Day04.h"
#include "gtest/gtest.h"

TEST(DecodeTheMessageTest, day04test)
{
    DecodeTheMessage decode_;
    int output_;
    output_ = decode_.decodeMessage("111");
    EXPECT_EQ(output_, 3);
    output_ = decode_.decodeMessage("2345");
    EXPECT_EQ(output_, 2);
    output_ = decode_.decodeMessage("101");
    EXPECT_EQ(output_, 1);
}