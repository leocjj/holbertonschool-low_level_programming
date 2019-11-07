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

	/**
	 * Result will have the bits difference between n and m.
	 */
        result = n ^ m;

        /**
	 * Read bit by bit and add counter if result has a '1'.
	 * Move result to the rigth.
	 */
        while (result)
	{
		if (result & bit)
			counter++;
		result = result >> 1;
	}

	return (counter);
}
