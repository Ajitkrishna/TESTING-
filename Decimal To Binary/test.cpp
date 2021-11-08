#include "pch.h"
#include "gtest/gtest.h"
#include "convDeci.h"


TEST(BinaryTest, check1)
{
	DeciConv d1;
	int a = d1.convert(4);
	int b = 100;
	EXPECT_EQ(b, a);
	


}
TEST(BinaryTest, check2)
	{
		DeciConv d2;
		int a = d2.convert(5);
		int b = 101;
		EXPECT_EQ(b, a);

	}

TEST(BinaryTest, check3)
{
	DeciConv d3;
	int a = d3.convert(15);
	int b = 1111;
	EXPECT_EQ(b, a);

}
