#include <stdio.h>

void htoi(int s[]);

void main()
{
	int test[] = {0x4E, 0X28, 0x42, 0x22, 0X32, 0x64};
	for (int j = 0; j < 5; j++)
	{
		printf("%c\n", test[j]);
	}	
	htoi(test);
	for (int j = 0; j < 5; j++)
	{
		printf("%c\n", test[j]);
	}	
}

void htoi(int s[])
{
	int i = 0;
	//check for 0x or 0X
	/*if (s[0] == 0 && (s[1] == x || s[2] == X))
	{
		i = 2;
	}*/
	for (i = 0; s[i] !='\0'; i++)
	{
		s[i] = (int)s[i];
	}	
}