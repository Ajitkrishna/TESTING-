#include "pch.h"
#include "OctalToBinary.h"

int OctalToBinary::octalToDecimal(int n)
{
    int num = n;
    int dec = 0;
    int base = 1;

    int temp = num;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec += last_digit * base;
        base = base * 8;
    }

    return dec;
}


int OctalToBinary::convert(int n)
{
    int bin = 0;
    int rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int OctalToBinary::convertToBinary(int n)
{
    int d = octalToDecimal(n);
    int b = convert(d);
    return b;
}
