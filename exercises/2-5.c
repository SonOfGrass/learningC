/*
Author: Benjamin Songras-Rosales
Purpose: Write a function any() that returns the first location where 2 strings match, and if none match, return -1.
Date: 6/6/18
*/

#include <stdio.h>

int getLine(char s[], int lim);

void main()
{

}

void 

int getLine(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n' ; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i++] = c;
	}
	s[i] = '\0';
	return i;
}