#include "pch.h"
#include "Anagram.h"
#include "gtest/gtest.h"

TEST(TestAnagram, Testcase1) 
{
	Anagram s1;
	string s = "fried";
	string t = "fired";
	EXPECT_TRUE(s1.areAnagram(s, t));
}

TEST(TestAnagram, Testcase2)
{
	Anagram s1;
	string s = "race";
	string t = "care";
	EXPECT_TRUE(s1.areAnagram(s, t));
}

TEST(TestAnagram, Testcase3)
{
	Anagram s1;
	string s = "race";
	string t = "rose";
	EXPECT_FALSE(s1.areAnagram(s, t));
}