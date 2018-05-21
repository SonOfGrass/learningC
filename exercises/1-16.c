/*
Author: Benjamin Songras-Rosales
Purpose: Print the longest line of an input.
Note: to correctly print the length of an arbitrary line, you would have to change the for loop in the getLine function to a while loop and have it count the arbitrary length. There is no way to make the main function work for an arbitrarily long input line, as I can see.
*/

#include <stdio.h>

#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	max = 0;

	while ((len = getLine(line, MAXLINE)) > 0)
	{
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0)
	{
		printf("\nThe longest line: %s\n", longest);
		printf("It's length: %d\n", max);
	}
	return 0;
}

/*getLine: read a line into s, return length*/
int getLine(char s[], int lim)
{
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n' ; ++i)
		s[i] = c;
	if (c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

/*copy: copy 'from' into 'to': assume to is big enough*/
void copy(char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}