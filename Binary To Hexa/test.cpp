#include "pch.h"
#include "BinaryToHexa.h"
#include "gtest/gtest.h"

TEST(TestHexa, Testcase1) 
{
	BinaryToHexa h1;
	int b = 1100;
	string num = "C";
	EXPECT_EQ(num,h1.convertToHexa(b));
}

TEST(TestHexa, Testcase2)
{
	BinaryToHexa h1;
	int b = 1010;
	string num = "A";
	EXPECT_EQ(num, h1.convertToHexa(b));
}

TEST(TestHexa, Testcase3)
{
	BinaryToHexa h1;
	int b = 10101010;
	string num = "AA";
	EXPECT_EQ(num, h1.convertToHexa(b));
}


TEST(TestHexa, Testcase4)
{
	BinaryToHexa h1;
	int b = 101111;
	string num = "2F";
	EXPECT_EQ(num, h1.convertToHexa(b));
}