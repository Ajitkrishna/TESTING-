#include "pch.h"
#include "hexaTodeci.h"

int hexaTodeci::hecaToDecimal(string str)
{
    {
        len = str.size();
        base = 1;
        dec= 0;

        for (int i = len - 1; i >= 0; i--) 
        {         
            if (str[i] >= '0' && str[i] <= '9')
            {
                dec+=(int(str[i]) - 48) * base;
                base = base * 16;
            }
            else if (str[i] >= 'A' && str[i] <= 'F') 
            {
                dec+= (int(str[i]) - 55) * base;
                base = base * 16;
            }
        }
        return dec;
    }
}