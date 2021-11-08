#include "pch.h"
#include "gtest/gtest.h"
#include "hexToOctal.h"

TEST(TestHexa, TestCase1)
{
	hexToOctal h1;
	string s = "AA";
	int n = h1.hexaToOctal(s);
	int num = 252;
	EXPECT_EQ(num, n);
}
TEST(TestHexa, TestCase2)
{
	hexToOctal h1;
	string s = "B4";
	int n = h1.hexaToOctal(s);
	int num = 264;
	EXPECT_EQ(num, n);
}

TEST(TestHexa, TestCase3)
{
	hexToOctal h1;
	string s = "F2";
	int n = h1.hexaToOctal(s);
	int num = 362;
	EXPECT_EQ(num, n);
}