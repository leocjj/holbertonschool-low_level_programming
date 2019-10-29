#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
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
