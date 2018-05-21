/*
Author: Benjamin Songras-Rosales
Purpose: Reverse lines in an input
*/

#include <stdio.h>

#define MAXLINE 1000

int getLine(char s[], int lim);
void reverse(char norm[]);

int main()
{
	int len;
	char line[MAXLINE];

	while ((len = getLine(line, MAXLINE)) > 0)
	{
		//printf("Original: %s", line);
		reverse(line);
		printf("%s", line);
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

void reverse(char norm[])
{
	int len, c, i, hold;
	len = c = hold = i = 0;

	for(i = 0; (norm[i] != '\0'); i++) //counts the number of characters in norm[]
	{
		; //nothing happens
	}

	i--; //to not flip the \0 character
	for(int j = 0; j < i; j++)
	{
		hold = norm[j];
		norm[j] = norm[i];
		norm[i] = hold;
		i--;
	}
}