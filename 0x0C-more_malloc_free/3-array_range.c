#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum number to allocate in the array
 * @max: maximum number to allocate in the array
 *
 * Return: pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *a = NULL;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		*(a + i) = min;

	return (a);
}
