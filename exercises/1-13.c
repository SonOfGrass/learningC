/*
Author: Benjamin Songras-Rosales
Purpose: Print a histogram of the lengths of words in it's input
*/

#include <stdio.h>

#define IN 1	//inside a word
#define OUT 0	//outside a word

void main()
{
	int c, count;
	int length[100];
	int state = OUT;
	count = 0;

	for (int i = 0; i < 100; i++)
		length[i] = 0;

	while ((c = getchar()) != EOF)
		if (c == ' ' || c == '\t' || c == '\n')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++length[count];
			count = 0;
			++count;
		}
		else if (state == IN)
			++count;

	--length[0]; //to account for the first 0
/*
	printf("digits =");
	for (int i = 0; i < 100; ++i)
		printf(" %d", length[i]);
*/
	printf("DIGITS\n");
	for (int i = 0; i < 100; ++i)
	{
		printf("%2d | ", i);
		for (int j = 0; j < length[i]; ++j)
		{
			putchar('+');
		}
		putchar('\n');
	}
}