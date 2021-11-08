#include "pch.h"
#include "hexToOctal.h"

int hexToOctal::hecaToDecimal(string str)
{
    {
        int len = str.size();
       int  base = 1;
       int dec = 0;

        for (int i = len - 1; i >= 0; i--)
        {
            if (str[i] >= '0' && str[i] <= '9')
            {
                dec += (int(str[i]) - 48) * base;
                base = base * 16;
            }
            else if (str[i] >= 'A' && str[i] <= 'F')
            {
                dec += (int(str[i]) - 55) * base;
                base = base * 16;
            }
        }
        return dec;
    }
}

int hexToOctal::decimalToOctal(int n)
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

int hexToOctal::hexaToOctal(string n)
{
    int s = hecaToDecimal(n);
    int num=decimalToOctal(s);
    return num;
}
