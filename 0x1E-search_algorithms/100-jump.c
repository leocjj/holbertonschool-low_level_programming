#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * jump_search -searches for a value in a sorted array of integers using the
 * Jump search algorithm.
 * gcc -Wall -Wextra -Werror -pedantic 100-main.c 100-jump.c -lm -o 100-jump
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i = 0, prev = 0, step = 1, sqrt_size = 1;

	if (array == NULL)
		return (-1);

	/* Block size to be jumped */
	step = sqrt_size = (int)sqrt(size);

	/* Finding the block where element is present (if it is present) */
	while (array[step] <= value && step < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)prev, array[prev]);
		prev = step;
		step += sqrt_size;
		if (step >= size)
			step = size;
	}

	printf("Value found between indexes [%d] and [%d]\n", (int)prev, (int)step);

	/* Doing a linear search for x in block beginning with prev. */
	for (i = prev; i < step; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)prev, array[prev]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
