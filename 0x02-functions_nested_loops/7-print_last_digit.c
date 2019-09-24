#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The integer to prints the last digit.
 *
 * Return: prints the last digit of n.
 */
int print_last_digit(int n)
{
	n = _abs(n % 10);
	_putchar(n+'0');
	return (n);
}
