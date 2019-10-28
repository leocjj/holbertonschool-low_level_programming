#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * concat_b - Function that converts integer to binary.
 * @buffer: string base to add the next parameter.
 * @integer: integer to convert to binary.
 * @chars_printed: chars printed.
 *
 * Return: number of character added.
 */

int concat_b(char *buffer, unsigned int integer, int *chars_printed)
{
	int result = 0;
	unsigned long int power = 1;
	long double binary = 0;

	if (integer == 0)
	{
		result += concat_c(buffer, '0', chars_printed);
		return (result);
	}
	while (integer / 2 > 0)
	{
		binary += (integer % 2) * power;
		integer /= 2;
		power *= 10;
	}
	binary += (integer % 2) * power;
	integer /= 2;
	power *= 10;
	result += concat_l(buffer, binary, chars_printed);
	return (result);
}

/**
 * concat_l - Function that concatenate a strings with long int.
 * @buffer: string base to add the next parameter.
 * @integer: unsigned long integer to add.
 * @chars_printed: chars printed.
 *
 * Return: number of character added.
 */

int concat_l(char *buffer, long double integer, int *chars_printed)
{
	int result = 0, temp = 0;
	long double max = 10000000000000000000000000000000;

	if (integer == 0)
	{
		result += concat_c(buffer, '0', chars_printed);
		return (result);
	}
	while ( (int)(integer / max) == 0)
		max /= 10;
	while (max >= 1)
	{
		temp = (int)(integer / max);
		result += concat_c(buffer, temp + '0', chars_printed);
		integer -= max * temp;
		max /= 10;
	}
	return (result);
}
