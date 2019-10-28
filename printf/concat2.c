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
	int power = 1, result = 0;

	if (integer == 0)
	{
		result += concat_c(buffer, '0', chars_printed);
		return (result);
	}
	while (integer / 2 > 0)
	{
		result += (integer % 2) * power;
		integer /= 2;
		power *= 10;
	}
	result += concat_i(buffer, result, chars_printed);
	return (result);
}
