#include "pch.h"
#include"DecimalTooctal.h"
#include "gtest/gtest.h"

TEST(TestOctal, TestCase) 
{
	DecimalTooctal d1;
	int d = 10;
	int o = 12;
	int a= d1.decimalToOctal(d);
	EXPECT_EQ(o, a);
}

TEST(TestOctal, TestCase2)
{
	DecimalTooctal d1;
	int d = 19;
	int o = 23;
	int a = d1.decimalToOctal(d);
	EXPECT_EQ(o, a);
}

TEST(TestOctal, TestCase3)
{
	DecimalTooctal d1;
	int d = 100;
	int o = 144;
	int a = d1.decimalToOctal(d);
	EXPECT_EQ(o, a);
}