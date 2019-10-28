#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * size_temp - Function that calculate the size of string.
 * @temp_s: string calculate size.
 *
 * Return: size of the string.
 */

int size_temp(char *temp_s)
{
	int j = 0;

	for (j = 0; j < buffer_size; j++)
		if (*(temp_s + j) == '\0')
			return (j);
	return (j);
}

/**
 * free_temp - Function to clear buffer.
 * @temp_s: buffer to be cleared
 *
 * Return: void
 */

void free_temp(char *temp_s)
{
	int j = 0;

	for (j = 0; j < buffer_size; j++)
		*(temp_s + j) = '\0';
}

/**
 * concat - Function that concatenate two strings.
 * @s1: string to which it should be added.
 * @s2: String to be add.
 * Return: String already concatenate
 */

char *concat(char *s1, char *s2)
{
	int size_of_s1 = 0, size_of_s2 = 0, j = 0;

	if (s1 == NULL)
	{
		return (NULL);
	}
	else
		while (s1[size_of_s1] != '\0')
			size_of_s1++;

	if (s2 == NULL)
	{
		return (s1);
	}
	else
		while (s2[size_of_s2] != '\0')
			size_of_s2++;

	for (j = 0; j < size_of_s2; j++)
		s1[size_of_s1 + j] = s2[j];

	s1[size_of_s1 + size_of_s2 + 1] = '\0';
	return (s1);
}
