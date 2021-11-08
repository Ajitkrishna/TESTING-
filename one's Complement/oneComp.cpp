#include "pch.h"
#include "oneComp.h"

string oneComp::binary(string n)
{
	int i;
	for (i = 0; i < n.length(); i++)
	{
		if (n.at(i) == '0')
			n.at(i) = '1';
		else
			n.at(i) = '0';
	}
	return n;
}
