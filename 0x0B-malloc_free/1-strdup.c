#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to copy
 *
 * Return: returns a pointer to a newly allocated space in memory.
 */

char *_strdup(char *str)
{
	char *a = NULL;
	unsigned int size = 0, i = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; *(str + i) != '\0'; i++)
		size++;

	a = (char *) malloc((size + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(a + i) = *(str + i);

	*(a + size) = *(str + size);
	return (a);
}
