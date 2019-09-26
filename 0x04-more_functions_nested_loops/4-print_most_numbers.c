#include "holberton.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	i = -1;
	while (i++ < 9)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + '0');
	}
	_putchar('\n');
}
