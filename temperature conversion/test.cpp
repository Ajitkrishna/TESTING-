#include "pch.h"
#include "gtest/gtest.h"
#include "temperature.h"

TEST(TestTemp,case1)
{
	temperature t1;
	float a =-40;
	ASSERT_EQ(t1.convertToFahrenheit(a),t1.convertToCelsius(a));
}

TEST(TestTemp, case2)
{
	temperature t2;
	float a =-273;
	float b = -459.4;
	float c = t2.convertToFahrenheit(a);
	EXPECT_TRUE(b ==c );
}

TEST(TestTemp, case3)
{
	temperature t3;
	float a = 0;
	float b = 32;
    ASSERT_EQ(b,t3.convertToFahrenheit(a));
}