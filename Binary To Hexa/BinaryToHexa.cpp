#include "pch.h"
#include "BinaryToHexa.h"

int BinaryToHexa::binaryToDecimal(int n)
{
    int dec = 0;
    int base = 1;
    int temp = n;
    while (temp)
    {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec += last_digit * base;
        base = base * 2;
    }

    return dec;
}

string BinaryToHexa::ToHexal(int dec)
{
    int r;
    string hexdec_num = "";
    char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    while (dec > 0)
    {
        r = dec % 16;
        hexdec_num = hex[r] + hexdec_num;
        dec = dec / 16;
    }
    return hexdec_num;
}

string BinaryToHexa::convertToHexa(int n)
{
    int d = binaryToDecimal(n);
    string num = ToHexal(d);
    return num;
}

