/*
Author: Benjamin Songras-Rosales
Purpose: Rewrite the temperature conversion program with a function
*/

#include <stdio.h>

float fahrToCels(int fahr);

int main()
{
	float fahr;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;

	printf("Fahrenheit -> Celsius table\n\n");

	fahr = lower;

	while(fahr <= upper)
	{
		printf("%3.0f |%6.1f\n", fahr, fahrToCels(fahr));
		fahr = fahr + step;
	}
	return 0;
}

float fahrToCels(int fahr)
{
	float cels;
	cels = (5.0/9.0) * (fahr - 32.0);
	return cels;
}