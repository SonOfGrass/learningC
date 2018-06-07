/*
Author: Benjamin Songras-Rosales
Purpose: Get rid of tabs and turn them into spaces! Yay! More characters!
*/

#include <stdio.h>

int space2tabs = 5;
void detab(char line[]);
int getLine(char s[], int lim);

void main()
{
	int len;
	char line[1000];

	while((len = getLine(line, 10000)) > 0)
	{
		detab(line);
	}
}

void detab(char line[])
{
	int tabs, spaces;
	tabs = spaces = 0;

	for (int i = 0; line[i] != '\0'; i++)
	{
		if (line[i] == '\t')
		{
			++tabs;
		}
	}

	spaces = space2tabs * tabs;
	//I was going to extend the size of the array and add more spaces, but apparently arrays are static. :(
	
	for (spaces; spaces >= 0; --spaces)
	{
		putchar(' ');
	}
	printf("%s", line);
}

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