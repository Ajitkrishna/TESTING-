#include "pch.h"
#include "octalToDeci.h"

int octalToDeci::octalToDecimal(int n)
{
    int num = n;
    int dec= 0;
    int base = 1;

    int temp = num;
    while (temp) 
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec+= last_digit * base;
        base = base * 8;
    }

    return dec;
}