#include <gtest/gtest.h>
#include "../Sin.h"
#include <cmath>

TEST(Sinus, many)
{
ASSERT_EQ(round((Sinus(2) * 10000)) / 10000, round((sin(2) * 10000)) / 10000);
ASSERT_EQ(round((Sinus(6) * 10000)) / 10000, round((sin(6) * 10000)) / 10000);
ASSERT_EQ(round((Sinus(4) * 10000)) / 10000, round((sin(4) * 10000)) / 10000);
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return  RUN_ALL_TESTS();
}