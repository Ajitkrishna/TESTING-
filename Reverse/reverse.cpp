#include "pch.h"
#include "reverse.h"

int Reverse::rev(int n)
{
    num = 0;
    while (n != 0)
    {
        rem = n % 10;
        num = (num * 10) + rem;
        n = n / 10;
    }
    return num;
}

string Reverse::revStr(string s)
{
    int len = s.length();
    int n = len - 1;
    int i = 0;
    while (i <= n)
    {
        swap(s[i], s[n]);
        n = n - 1;
        i = i + 1;

    }
    return s;
}
