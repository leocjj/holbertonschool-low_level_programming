#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - function that frees a 2 dimensional grid previously created.
 * @grid: array of arrays of integers.
 * @height: hight of the matrix to return (number of rows).
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (height <= 0)
		return;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
