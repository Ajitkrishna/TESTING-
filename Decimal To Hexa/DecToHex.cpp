#include "pch.h"
#include "DecToHex.h"

string DecToHex::ToHexal(int dec)
{
    int r;
    string hexdec_num = "";
    char hex[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    while (dec > 0)
    {
        r = dec% 16;
        hexdec_num = hex[r] + hexdec_num;
        dec = dec/ 16;
    }
    return hexdec_num;
}
