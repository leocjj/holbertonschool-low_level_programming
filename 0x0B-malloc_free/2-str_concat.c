#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 *
 * Return: pointer to a newly allocated space in memory which contains
 * the contents of s1, followed by the contents of s2
 */

char *str_concat(char *s1, char *s2)
{
	char *a = NULL;
	unsigned int size1 = 0, size2 = 0, i = 0;

	for (i = 0; *(s1 + i) != '\0'; i++)
		size1++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		size2++;

	a = (char *) malloc((size1 + size2 + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(a + i) = *(s1 + i);
	for (i = 0; i < size2; i++)
		*(a + size1 + i) = *(s2 + i);
	*(a + size1 + size2) = *(s2 + size2);
	return (a);
}
