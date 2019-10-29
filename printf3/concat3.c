#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "holberton.h"

/**
 * concat_s - Function that concatenates two strings plus null.
 * @s1: string to concatenate first
 * @s2: string to concatenate second.
 *
 * Return: pointer to concatenated string.
 */

char *concat_s(char *s1, char *s2)
{
	int j = 0, i = 0, k, a;
	char *s;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
		return ('\0');

	for (k = 0; k < i; k++)
		s[k] = s1[k];
	for (a = 0; a < j; a++)
		s[i + a] = s2[a];

	s[i + j] = '\0';
	return ((char *)s);
}

/**
 * reverse_string - Function that reverse a string.
 * @string: string to be reversed.
 *
 * Return: string reversed.
 */

char *reverse_string(char *string)
{
	int string_size = 0, result_size = 0;
	char *result;

	while (string[string_size] != '\0')
		string_size++;

	result = malloc(sizeof(char) * (string_size + 1));
	if (result == NULL)
		return ('\0');

	for (result_size = 0; result_size <= string_size; result_size++)
		result[result_size] = string[string_size - 1 - result_size];

	result[result_size + 1] = '\0';
	return ((char *)result);
}

/**
 * rot13 - Function that returns root13'ed string.
 * @string: string to be rot13'ed.
 *
 * Return: string rot13'ed.
 */

char *rot13(char *string)
{
	int string_size = 0, result_size = 0;
	char *result, ch;

	while (string[string_size] != '\0')
		string_size++;

	result = malloc(sizeof(char) * (string_size + 1));
	if (result == NULL)
		return ('\0');

	for (result_size = 0; result_size < string_size; result_size++)
	{
		ch = string[result_size];
		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 'a' + 13;
			if (ch >= 26)
				ch %= 26;
			result[result_size] = (ch + 'a');
		}
		else if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch - 'A' + 13;
			if (ch >= 26)
				ch %= 26;
			result[result_size] = (ch + 'A');
		}
		else
		{
			result[result_size] = ch;
		}
	}
	result[result_size] = '\0';
	return ((char *)result);
}

/**
 * concat_u - print an unsigned int.
 * @buffer: string base to add the next parameter.
 * @integer: integer to convert.
 * @chars_printed: chars printed.
 *
 * Return: number of character added.
 *

int concat_u(char *buffer, int integer, int *chars_printed)
{
	int result = 0;
	unsigned int temp = 0;

	if (integer >= 0)
	{
		result += concat_i(buffer, integer, chars_printed);
		return (result);
	}
	else
	{
		temp = UINT_MAX;
		temp = temp - integer + 1;
		result += concat_i(buffer, temp, chars_printed);
		return (result);
	}
}*/

int concat_u(char *buffer, unsigned int integer, int *chars_printed)
{
	int max = 1000000000, temp = 0, result = 0;

	if (integer == 0)
	{
		result += concat_c(buffer, '0', chars_printed);
		return (result);
	}
	while (integer / max == 0)
		max /= 10;
	if (integer < 0)
	{
		result += concat_c(buffer, '-', chars_printed);
		result += concat_c(buffer, -(integer / max) + '0', chars_printed);
		integer %= max;
		integer *= -1;
		max /= 10;
	}
	while (max >= 1)
	{
		temp = integer / max;
		result += concat_c(buffer, temp + '0', chars_printed);
		integer -= max * temp;
		max /= 10;
	}
	return (result);
}






