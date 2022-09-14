#include "main.h"
#include <stdio.h>
/**
 * main - Prints the sum of all miultiples of 3 or 5 up to 102
 * Return: Always (success)
 */
int main(void)
{
	int multiples = 0;
	int output = 0;

	while (multiples < 1024)
	{
		if (multiples % 3 == 0 || multiples % 5 == 0)
		{
			output += multiples;
		}
		multiples += 1;
	}
	printf("%d\n", output);
	return (0);
}
