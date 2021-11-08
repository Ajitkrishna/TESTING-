#include "pch.h"
#include "temperature.h"

float temperature::convertToFahrenheit(float &n)
{
	temp= ((n * 9 / 5) + 32.0);
	return temp;
}
float temperature::convertToCelsius(float &n)
{
	temp = ((n-32)*5/9);
	return temp;
}


