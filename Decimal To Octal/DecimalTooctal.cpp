#include "pch.h"
#include "DecimalTooctal.h"

int DecimalTooctal:: decimalToOctal(int n)
{
    int remainder;
    int octal = 0, i = 1;

    while (n != 0)
    {
        remainder = n % 8;
        n = n / 8;
        octal = octal + (remainder * i);
        i = i * 10;
    }
    return octal;
}