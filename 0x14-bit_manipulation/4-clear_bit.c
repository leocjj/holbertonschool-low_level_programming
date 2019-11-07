#include <stdio.h>
#include <limits.h>
#include "holberton.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: integer to modify.
 * @index: index to modify the integer n.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;
	unsigned int bits_of_n = sizeof(*n) * 8;

	/**
	 * Error if index is greater than bits of n.
	 */
	if (index >= bits_of_n)
		return (-1);

	bit = bit << index;

	*n = (*n) & (~bit);

	return (1);
}
