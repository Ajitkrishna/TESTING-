#include "pch.h"
#include "gtest/gtest.h"
#include "permutation.h"

TEST(TestnCr, Testcase1) 
{
	permutation p1;
	int n = 5;
	int r = 2;
	int p = 10;
	int c=p1.nCr(n, r);
	EXPECT_EQ(p, c);
}

TEST(TestnCr, Testcase2)
{
	permutation p1;
	int n = 10;
	int r = 2;
	int p = 45;
	int c = p1.nCr(n, r);
	EXPECT_EQ(p, c);
}

TEST(TestnCr, Testcase3)
{
	permutation p1;
	int n = 6;
	int r = 3;
	int p = 20;
	int c = p1.nCr(n, r);
	EXPECT_EQ(p, c);
}