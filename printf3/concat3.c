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

char concat_s(char *s1, chat *s2)
{
	int j, i, k, a;
	char *s;

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		return ('\0');
	}
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (a = 0; a < j; a++)
	{
		s[i + a] = s2[a];
	}
	s[i + j] = '\0';
	return (s);
}
