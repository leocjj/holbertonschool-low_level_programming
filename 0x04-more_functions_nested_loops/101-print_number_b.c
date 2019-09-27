#include "holberton.h"

/**
 * print_number - Entry point
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int max, a;

	max = 1000;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	while (max - n > 0)
	{
		max /= 10;
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max >= 1)
	{
		a = n / max;
		_putchar (a + '0');
		n -= max * a;
		max /= 10;
	}
}
