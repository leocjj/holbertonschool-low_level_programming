#include "holberton.h"

/**
 * _print_sign - check the sign of an integer.
 * @n: The integer to evaluate
 *
 * Return: 1,0,-1 according with the sign of the integer n.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
