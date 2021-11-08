#include "pch.h"
#include"gtest/gtest.h"
#include "hexaToDeci.h"

TEST(TestHexToBinary, TestCase1) 
{
	hexa h1;
	string s = "A";
	int b=h1.HexToBin(s);
	int c = 1010;
	EXPECT_EQ(c,b);
}

TEST(TestHexToBinary, TestCase2)
{
	hexa h1;
	string s = "AA";
	int b = h1.HexToBin(s);
	int c = 10101010;
	EXPECT_EQ(c, b);
}

TEST(TestHexToBinary, TestCase3)
{
	hexa h1;
	string s = "FC";
	int b = h1.HexToBin(s);
	int c = 11111100;
	EXPECT_EQ(c, b);
}