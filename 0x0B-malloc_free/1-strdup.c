#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @size: size of the array to create.
 * @c: character to initilize the array.
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

	a = (char *) malloc(size * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(a + i) = *(str + i);

	return (a);
}
