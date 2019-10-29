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
	char *a = NULL;
	unsigned int size1 = 0, size2 = 0, i = 0;

	if (s1 != NULL)
		for (i = 0; *(s1 + i) != '\0'; i++)
			size1++;
	if (s2 != NULL)
		for (i = 0; *(s2 + i) != '\0'; i++)
			size2++;

	a = (char *) malloc((size1 + size2 + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(a + i) = *(s1 + i);
	for (i = 0; i < size2; i++)
		*(a + size1 + i) = *(s2 + i);
	*(a + size1 + size2) = '\0';
	return (a);
}
