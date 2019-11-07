#include <stdio.h>
#include <limits.h>
#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: integer to print as binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bit = 1, result = 0;
	int bits_of_n = sizeof(n) * 8;

	/**
	 * Puts as '1' at the left of the max number
	 */
	bit = bit << (bits_of_n - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/**
	 * Move the '1' to the right until the first '1' of n is founded.
	 */
	while (!(n & bit))
		bit = bit >> 1;

	/**
	 * Prints bit by bit of n, moving the '1' to the right each time.
	 */
	while (bit)
	{
		result = n & bit;
		if (result)
			_putchar('1');
		else
			_putchar('0');
		bit = bit >> 1;
	}
}
