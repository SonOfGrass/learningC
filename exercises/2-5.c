/*
Author: Benjamin Songras-Rosales
Purpose: Write a function any() that returns the first location where 2 strings match, and if none match, return -1.
Date: 6/6/18
*/

#include <stdio.h>

#define MAXLINE 1000

int getLine(char s[], int lim);
int any(char s1[], char s2[]);

void main()
{
	int match;
	char str1[MAXLINE];
	char str2[MAXLINE];

	getLine(str1, MAXLINE);
	getLine(str2, MAXLINE);
	match = any(str1, str2);

	printf("The strings match at: %d\n", match);
}

int any(char s1[], char s2[])
{
	int i, len;
	len = 0;

	for(i = 0; s1[i] != '\0'; i++)
	{
		if(s1[i] == s2[i])
		{
			len = i;
			break;
		}
	}

	if (len == 0 && i > 0)
	{
		len = -1;
	}
	return len;
}

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