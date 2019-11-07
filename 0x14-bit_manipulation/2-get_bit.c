#include <stdio.h>
#include <limits.h>
#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer evaluate.
 * @index: index to evaluate the integer n.
 *
 * Return: value of the bit at index index or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = 1, result = 0;
	unsigned int bits_of_n = sizeof(n) * 8;

	/**
	 * Error if index is greater than bits of n.
	 */
	if (index >= bits_of_n)
		return (-1);

	bit = bit << index;

	if (n & bit)
		result = 1;
	else
		result = 0;

	return (result);
}
