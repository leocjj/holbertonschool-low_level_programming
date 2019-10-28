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

char *concat_s(char *s1, char *s2)
{
	int j, i, k, l;
	char *arr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
        for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	arr = malloc(sizeof(*arr) * (i + j + 1));
	if (arr == NULL)
	{
		return ('\0');
	}
	for (k = 0; k < i; k++)
	{
		arr[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		arr[i + l] = s2[l];
	}
	*(arr + i + j) = '\0';
	return (arr);
}
