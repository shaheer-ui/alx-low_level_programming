#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n: input value
 * Return: returns the last digit 
 */

int print_last_digit(int n)
{
	int last_d = n % 10;
	if (n < 0)
	{
		last_d = last_d * -1;
	}
	_putchar(last_d + '0');
	return (last_d);
}
