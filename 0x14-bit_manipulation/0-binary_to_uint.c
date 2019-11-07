#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string to be converted
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, power = 1;
	int i = 0;

	if (b == NULL)
		return (0);
	/**
	 * 1) checks if string has only 0's and 1's and calculates its size.
	 */
	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	/**
	 *if (i > 32)
	 *	return (0);
	 *
	 *
	 * 2) read bits from right to left and multiply it by power of 2.
	 */
	while (i)
	{
		if (*(b + i - 1) == '1')
			result += 1 * power;
		power *= 2;
		i--;
	}

	return (result);
}
