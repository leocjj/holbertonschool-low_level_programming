#include "holberton.h"

/**
 * print_number - Entry point
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int max, dec, i, cont;

	i = 1;

	cont = 1;
	dec = 10;
	max = 1000000000;
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (max - n > 0)
	{
		max /= 10;
	}

	if (max)
		_putchar(n / max + '0');
	else
		_putchar('0');
	while (max / dec)
	{
		_putchar((n % max) / (max * i / dec) + '0');
		dec *= 10;
		cont++;
		if (cont == 3 && max == 1000)
		{
			_putchar((n % max) % (10) + '0');
			break;
		}
	}
}
