/*
Author: Benjamin Songras-Rosales
Purpose: Print one word per line
*/

#include <stdio.h>

void main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\t')
			putchar('\n');
		else
			putchar(c);
	}
}