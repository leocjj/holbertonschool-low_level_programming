#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The integer to prints the last digit.
 *
 * Return: prints the last digit of n.
 */
int print_last_digit(int n)
{
	int temp = n;

	if (temp > 0)
	{
		_putchar(temp % 10 + '0');
	}
	if (temp == 0)
	{
		_putchar('0');
	}
	if (temp < 0)
	{
		temp = -temp;
		_putchar(temp % 10 + '0');
	}

	return (temp);
}
