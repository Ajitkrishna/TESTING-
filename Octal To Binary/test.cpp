#include "pch.h"
#include "gtest/gtest.h"
#include "OctalToBinary.h"

TEST(TestBinary, TestCase1)
{
	OctalToBinary o1;
	int oct = 123;
    int b = 1010011;
	EXPECT_EQ(b,o1.convertToBinary(oct));
}


TEST(TestBinary, TestCase2)
{
	OctalToBinary o1;
	int oct = 12;
	int b = 1010;
	EXPECT_EQ(b, o1.convertToBinary(oct));
}

TEST(TestBinary, TestCase3)
{
	OctalToBinary o1;
	int oct = 16;
	int b = 1110;
	EXPECT_EQ(b, o1.convertToBinary(oct));
}
TEST(TestBinary, TestCase4)
{
	OctalToBinary o1;
	int oct = 14;
	int b = 1100;
	EXPECT_EQ(b, o1.convertToBinary(oct));
}