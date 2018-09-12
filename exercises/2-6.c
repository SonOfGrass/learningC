/*
Author: Benjamin Songras-Rosales
Purpose: return x with the 'n' bits that begin at position p set to the rightmost 'n' bits of 'y'. Leaves the other bits unchanged
*/
#include "stdio.h"

unsigned setbits(unsigned x, int p, int n, unsigned y);

void main()
{
	int i = 0;
	int j = 0;
	unsigned x = 0x00000000;
	unsigned y = 0xFFFFFFFF;
	for(i = 0; i < 32; i++)
	{
		for (j = 0; j < 32; j++)
		{
			printf("%d %d\t%08x\n", i, j, setbits(x, i, j, y));
		}
	}

	x = ~x;
	y = ~y;

	for(i = 0; i < 32; i++)
	{
		for (j = 0; j < 32; j++)
		{
			printf("%d %d\t%x\n", i, j, setbits(x, i, j, y));
		}
	}
}

//assume there's space in x
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
	unsigned msk = ~(~0 << n);
	return (x & ~(msk << p + 1 - n)) | ((y & msk) << p + 1 - n);
}
