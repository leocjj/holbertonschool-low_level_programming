#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *count_id - Function that return the length of the parameter.
 * @count: Length of the printf argument.
 * Return: Return the length of the argument.
 */

int count_id(char *count)
{
	int i, j, k, c;
	char letters[] = "c, s, d, e, f, g, i, o, s, u, k, x, p, X, G, F, E";

	if (count == NULL)
		return NULL;
	for (k = 0; count[k] != '\0', k++)
		{
		}
	for (i = 1; count[i] != '%', i++)
		for (j = 0; j < k; j++)
			if (count[i] != letter[i])
			c++;
	return (i);
}
