#include "pch.h"
#include "Addition.h"
#include "gtest/gtest.h"

TEST(TestBinaryAdd, Testcase1)
{
	Addition b1, b2;
	string a = "111";
	string b = "111";
	string c = "1110";
	string d=b1.addBinary(a, b);
	EXPECT_EQ(c, d);
}

TEST(TestBinaryAdd,Testcase2)
{
	Addition b1, b2;
	string a = "1111";
	string b = "1011";
	string c = "11010";
	string d = b1.addBinary(a, b);
	EXPECT_EQ(c, d);
}

TEST(TestBinaryAdd, Testcase3)
{
	Addition b1, b2;
	string a = "1111";
	string b = "1011";
	string c = "11110";
	string d = b1.addBinary(a, b);
	EXPECT_FALSE(c==d);
}
TEST(TestBinaryAdd, Testcase4)
{
	Addition b1, b2;
	string a = "1010";
	string b = "11";
	string c = "1101";
	string d = b1.addBinary(a, b);
	EXPECT_TRUE(c == d);
}