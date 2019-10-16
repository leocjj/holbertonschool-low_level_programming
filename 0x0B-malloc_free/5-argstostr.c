#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of strings
 *
 * Return: void.
 */

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, size = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			size++;

	result = malloc((size + ac + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);

	size = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, size++)
			result[size] = av[i][j];
		result[size] = '\n';
		size++;
	}
	result[size] = '\0';

	return (result);
}
