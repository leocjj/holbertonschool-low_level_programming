#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The integer to prints the last digit.
 *
 * Return: prints the last digit of n.
 */
int print_last_digit(int n)
{
	int temp;

	temp = n;
	if (temp < 0)
		temp = temp * (-1);
	temp = temp % 10;
	_putchar('0' + temp);
	return (temp);
}
