#include <stdio.h>

/*copy input to output, 2nd edition*/

main()
{
	int c;
	while ( (c = getchar()) != EOF)
		putchar(c);
	putchar(c);
	putchar('\n');
}