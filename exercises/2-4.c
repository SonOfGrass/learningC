/*
Author: Benjamin Songras-Rosales
Purpose: Have and test a function squeeze(char s1[], char s2[]), which removes the characters from the first string that match exactly with the second string
Date: 6/6/18
*/

#include <stdio.h>

#define MAXLINE 1000

int getLine(char s[], int lim);
void squeeze(char s1[], char s2[]);

void main()
{
	int c;
	char str1[MAXLINE];
	char str2[MAXLINE];

	getLine(str1, MAXLINE);
	getLine(str2, MAXLINE);

	squeeze(str1, str2);

	while((c = getchar()) != EOF)
	{
		;
	}
	printf("%s", str1);

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

void squeeze(char s1[], char s2[])
{
	int i, j;

	for (j = i= 0; s1[i] != '\0'; i++)
	{
		if(s1[i] != s2[i])
		{
			s1[j++] = s2[i];
		}
	}
}