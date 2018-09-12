/*
Author: Benjamin Songras-Rosales
Date: 9/12/18
Purpose: return an unsigned variable with the n bits that begin at position p inverted (1 to 0 and 0 to 1)
*/
#include "stdio.h"

unsigned invert(unsigned x, int p, int n);

void main()
{
	int i = 0;
	int j = 0;

	unsigned x = 0xFFFFFFFF;

	for(i = 0; i < 256; i++)
	{
		printf("%x %x\n", x, invert(x, i, 1));
	}
}

unsigned invert(unsigned x, int p, int n)
{
	unsigned msk = ~(~0 << n);
	return (x & ~(msk << p + 1 - n)) & (~(x & (msk << p + 1 - n)));
}