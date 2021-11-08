#include "pch.h"
#include "gtest/gtest.h"
#include "octalToDeci.h"

TEST(TestOctal, Testcase1) 
{
	octalToDeci o1;
	int oct = 33;
	int dec = 27;
	int num = o1.octalToDecimal(oct);
	EXPECT_EQ(dec, num);
  
}
TEST(TestOctal, Testcase2)
{
	octalToDeci o1;
	int oct = 30;
	int dec = 24;
	int num = o1.octalToDecimal(oct);
	EXPECT_EQ(dec, num);

}
TEST(TestOctal, Testcase3)
{
	octalToDeci o1;
	int oct = 10;
	int dec = 8;
	int num = o1.octalToDecimal(oct);
	EXPECT_EQ(dec, num);

}