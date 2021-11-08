#include "pch.h"
#include "gtest/gtest.h"
#include "reverse.h"

TEST(TestReverse, TestString1)
{
	Reverse r1;
	string n = "word";
	string x = "drow";
	EXPECT_EQ(r1.revStr(n),x);
}

TEST(TestReverse, TestNumber1)
{
	Reverse n1;
	int n = 1999;
	int x = 9991;
	EXPECT_EQ(n1.rev(n), x);
}

TEST(TestReverse, TestNumber2)
{
	Reverse n1;
	int n = 12345;
	int x = 54321;
	EXPECT_EQ(n1.rev(n), x);
}