#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * *count_id - Function that return the length of the parameter.
 * @count: Length of the printf argument.
 * Return: Return the length of the argument.
 */

int count_id(const char *count)
{
	int i = 0, j = 0;
	char letters[] = "csdefgiosukxpXGFE";

	if (count == NULL)
		return NULL;
	for (i = 1; count[i] != '\0'; i++)
		for (j = 0; j < 17; j++)
			if (count[i] == letters[j])
				return (i);
	return (0);
}
