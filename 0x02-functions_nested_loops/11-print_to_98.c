#include "main.h"
/**
* print_to_98 - Prints numbers to 98,
* @n: starting integer
* return: void 
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d,", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d,", n);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
