#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * concatenate - Function that concatenate two strings.
 * @s1: string to which it should be added.
 * @s2: String to be add.
 * Return: String already concatenate.
 */

char *concatenate(char *s1, char *s2)
{
	int size_of_s1 = 0, size_of_s2 = 0, i = 0, j = 0;
	char *s = NULL;

	if (s1 == NULL)
		size_of_s1 = 0;
	else
		while (s1[size_of_s1] != '\0')
			size_of_s1++;

	if (s2 == NULL)
		size_of_s2 = 0;
	else
		while (s2[size_of_s2] != '\0')
			size_of_s2++;

	if (size_of_s1 == 0 && size_of_s2 == 0)
		return (NULL);

	s = malloc(sizeof(char) * (size_of_s1 + size_of_s2 + 1));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size_of_s1; i++)
		s[i] = s1[i];
	for (j = 0; j < size_of_s2; j++)
		s[i + j] = s2[j];

	s[i + j + 1] = '\0';
	return (s);
}
