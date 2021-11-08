#include "pch.h"
#include"gtest/gtest.h"
#include"oneComp.h"

TEST(Testcomplement, Testcase1)
{
	oneComp b1;
	string s = "111";
	string b=b1.binary(s);
	string c = "000";
	EXPECT_EQ(c, b);
}


TEST(Testcomplement, Testcase2)
{
	oneComp b2;
	string s = "11101";
	string b = b2.binary(s);
	string c = "00010";
	EXPECT_EQ(c, b);
}

TEST(Testcomplement, Testcase3)
{
	oneComp b3;
	string s = "0000";
	string b = b3.binary(s);
	string c = "1111";
	EXPECT_EQ(c, b);
}