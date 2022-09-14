#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int i, j;
	
	i = 0
	while (i <= 9)
	{
		j = 0
		while (j <= 9)
		{
			if ((i * j) < 10)
			{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar((i * j) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((i * j) / 10 + '0');
				_putchar((i * j) % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
