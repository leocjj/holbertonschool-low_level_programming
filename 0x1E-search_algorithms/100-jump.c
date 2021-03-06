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
	int prev = 0, step = 1;

	if (array == NULL)
		return (-1);

	/* Block size to be jumped */
	step = sqrt(size);

	/* Finding the block where element is present (if it is present) */
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev += step;
		if (prev >= (int)size)
			break;
	}
	prev -= step;
	printf("Value found between indexes [%d] and [%d]\n", prev, (prev + step));

	/* Doing a linear search for x in block beginning with prev. */
	while (array[prev] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == (int)size)
			return (-1);
	}

	if (array[prev] == value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
