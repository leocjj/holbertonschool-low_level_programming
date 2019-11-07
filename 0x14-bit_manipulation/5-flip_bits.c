#include <stdio.h>
#include "holberton.h"

/**
 * flip_bits - unction that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: integer to evaluate.
 * @m: index to evaluate.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int result = 0, counter = 0;
	unsigned long int bit = 1;
	//unsigned int bits_of_n = sizeof(n) * 8;

	//bit = bit << bits_of_n - 1;
        result = n ^ m;

        while(result)
	{
		if (result & bit)
			counter++;
		result = result >> 1;
	}
	return (counter);
}
