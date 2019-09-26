#include "holberton.h"

/**
 * print_numbers - Entry point
 *
 * Return: void
 */
void print_numbers(void)
{
	int i;

	i = -1;
	while (i++ < 9)
		_putchar(i + '0');
	_putchar('\n');
}
