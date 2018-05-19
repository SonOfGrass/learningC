/*
Author: Benjamin Songras-Rosales
Purpose: Print the frequency of a different character
*/

#include <stdio.h>

void main()
{
	//int alphanumeric[62]; stupid idea, was going to have one per character, that's too much work.
	int c, letter, number, other;
	c = letter = number = other = 0;

	while ((c = getchar()) != EOF)
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
			++letter;
		else if (c >= '0' && c <= '9')
			++number;
		else
			++other;

	printf("letters: ");
	for (int i = 0; i < letter; ++i)
		putchar('+');
	putchar('\n');
	printf("numbers: ");
	for (int i = 0; i < number; ++i)
		putchar('+');
	putchar('\n');
	printf("other:   ");
	for (int i = 0; i < other; ++i)
		putchar('+');
	putchar('\n');
}