#include <stdio.h>

/*copy input to output, 2nd edition*/

main()
{
	int c;
	while ( (c = getchar()) != EOF)
		//if (c == 1 || c ==1)
		//	printf("TRUE");
		putchar(c);
}