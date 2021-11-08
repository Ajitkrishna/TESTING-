#include "pch.h"
#include "hexaToDeci.h"


int hexa::convert(int n)
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
int hexa::hexaToDecimal(string str)
{
    {
       int len = str.size();
       int base = 1;
      int  dec = 0;

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

int hexa::HexToBin(string n)
{
    hexa d1;
    int c = hexaToDecimal(n);
    int d = convert(c);
    return d;

}

