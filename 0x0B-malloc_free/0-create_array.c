#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of size, initialized with character c
 * @size: size of the array to create.
 * @c: character to initilize the array.
 *
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = (char *) malloc(size * sizeof(char));
	if (!a || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		*(a + i) = c;
	return (a);
}
