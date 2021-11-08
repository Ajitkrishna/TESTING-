#include "pch.h"
#include "DecToHex.h"
#include "gtest/gtest.h"

TEST(TestHexa, Testcase1) 
{
	DecToHex d1;
	int d = 10;
	string h=d1.ToHexal(d);
	string s = "A";
	cout << h;
	EXPECT_EQ(s, h);
}
TEST(TestHexa, Testcase2)
{
	DecToHex d1;
	int d = 123;
	string h = d1.ToHexal(d);
	string s = "7B";
	cout << h;
	EXPECT_EQ(s, h);
}

TEST(TestHexa, Testcase3)
{
	DecToHex d1;
	int d = 143;
	string h = d1.ToHexal(d);
	string s = "8F";
	cout << h;
	EXPECT_EQ(s, h);
}
