#include <stdio.h>

/*
This program prints a Celsius to Fahrenheit table
*/

main()
{
	float fahr, cels;
	int upper, lower, step;

	lower = 0;
	upper = 300;
	step  = 20;

	printf("\nCelsius -> Fahrenheit table\n\n");

	cels = lower;
	while (cels <= upper)
	{
		fahr = (cels / (5.0/9.0)) + 32.0;
		printf("%3.0f |%6.1f\n", cels, fahr);
		cels = cels + step;
	}
}