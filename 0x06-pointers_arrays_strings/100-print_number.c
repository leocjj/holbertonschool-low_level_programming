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

	max = 1000000000;
	if (n < 0)
	{
		_putchar('-');
		a = n / max;
		if (a != 0)
			_putchar(-a + '0');
		n %= max;
		n *= -1;
		max /= 10;
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
