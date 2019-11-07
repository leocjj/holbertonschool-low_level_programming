#include "holberton.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string to be converted
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0, size_of_b = 0;

	/**
	 * 1) checks if string has only 0's and 1's and calculates its size.
	 */
	while (*(b + i) != '\0')
	{
		if (*(b + i) != '0' && *(b + i) != '1')
			return (0);
		i++;
	}
	size_of_b = i;
	result = size_of_b;


	return (result);
}
