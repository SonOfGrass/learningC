/*
Author: Benjamin Songras-Rosales
Purpose: Count digits, white spaces, and other characters, then print them in a histogram.
Note: This wasn't what was asked for in the problem. oops
*/

#include <stdio.h>

void main()
{
	int c, i, nwhite, nother;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i < 10; i++)
		ndigit[i] = 0;

	while ((c = getchar()) != EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\t' || c == '\n')
			++nwhite;
		else 
			++nother;
/*
	printf("digits =");
	for (i = 0; i < 10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other = %d\n", nwhite, nother);
*/
	printf("DIGITS");
	for (i = 0; i < 10; ++i)
	{
		printf("%d", i);
		for (int j = 0; j < ndigit[i]; ++j)
		{
			printf("+");
		}
		putchar('\n');
	}
	for (i = 0; i < nwhite; ++i)
	{
		putchar('-');
	}
	putchar('\n');
	for (i = 0; i < nother; ++i)
	{
		putchar('o');
	}
	putchar('\n');
}