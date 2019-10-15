#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: width of the matrix to return (number of columns);
 * @height: hight of the matrix to return (number of rows);
 *
 * Return: returns a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **result;

	if (width <= 0 || height <= 0)
		return (NULL);

	result = malloc(height * sizeof(int *));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		result[i] = malloc(width * sizeof(int));
		if (result[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			result[i][j] = 0;
	}
	return (result);
}
