#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *count_id - Function that return the length of the parameter.
 * @count1: Length of the printf argument.
 * Return: Return the length of the argument.
 */

char *count_id(char *count1)
{
	int i, j;
	char letters[] = "c, s, d, e, f, g, i, o, s, u, k, x, p, X, G, F, E"

	if (count1 == NULL)
		return "";
	for (i = 0; i  != letters, i++)
		if (count1 == " ")
			return NULL;
	return (i);
}
