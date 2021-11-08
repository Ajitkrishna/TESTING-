#include "pch.h"
#include "gtest/gtest.h"
#include "Largest.h"

TEST(TestLargest, TestCase)
{
	int arr[] = { 55,56,57,66,67,68 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Largest l1;
	int a=l1.largest(arr,n);
	EXPECT_EQ(68, a);
	cout << a;
}

TEST(TestLargest, TestCase2)
{
	int arr[] = { 55,100,200,343,444,555,643,22};
	int n = sizeof(arr) / sizeof(arr[0]);
	Largest l1;
	int a = l1.largest(arr, n);
	EXPECT_EQ(643, a);
	cout << a;
}

TEST(TestLargest, TestCase3)
{
	int arr[] = { 23,24,25,26,27,28 };
	int n = sizeof(arr) / sizeof(arr[0]);
	Largest l1;
	int a = l1.largest(arr, n);
	EXPECT_EQ(28, a);
	cout << a;
}