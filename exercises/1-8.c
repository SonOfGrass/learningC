#include <stdio.h>

main()
{
	int c;
	double nc, nl, t;
	nc = nl = t= 0;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			++t;
		else if (c == '\n')
			++nl;
		else
			++nc;
	}
	printf("Characters: %.0f \nTabs: %.0f \nNewlines: %.0f \n", nc, t, nl);
}