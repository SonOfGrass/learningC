#include <stdio.h>

main()
{
	int c, space;
	space = 0;

	while((c = getchar()) != EOF)
	{
		if (c == ' ')
			++space;
		else
			space = 0;

		if (space > 1)
			;
		else
			putchar(c);
	}
}