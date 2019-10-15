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
	int *m = NULL;
	int **result = NULL;
	int i = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		m = (int *) malloc(width * sizeof(int));
		if (m == NULL)
			return (NULL);
		*(result + i) = m;
	}
	return (result);
}
