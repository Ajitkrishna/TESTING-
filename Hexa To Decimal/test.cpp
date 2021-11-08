#include "pch.h"
#include "gtest/gtest.h"
#include "hexaTodeci.h"

TEST(TesthexaToDecimal, Testcase1)
{
	hexaTodeci h1;
	string s = "1A4";
	int d = 420;
	EXPECT_EQ(d, h1.hecaToDecimal(s));
 
}

TEST(TesthexaToDecimal, Testcase2)
{
	hexaTodeci h1;
	string s = "FA4";
	int d = 4004;
	EXPECT_EQ(d, h1.hecaToDecimal(s));

}

TEST(TesthexaToDecimal, Testcase3)
{

	hexaTodeci h1;
	string s = "A32";
	int d = 2610;
	EXPECT_EQ(d, h1.hecaToDecimal(s));

}