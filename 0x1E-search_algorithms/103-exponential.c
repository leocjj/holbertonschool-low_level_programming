#include <stdio.h>

/**
 * binary_search_exponencial - searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * Print the array being searched every time it changes. (e.g. at the beginning
 * and when you search a subarray): Searching in array: 0, 1, 2, 3, 4
 *
 * @array: pointer to the first element of the array to search in
 * @value: value to search for
 * @low: low index of @array to search for
 * @size: high index of @array to search for
 *
 * Return: first index where value is located or -1 otherwise
 */
int binary_search_exponencial(int *array, int value, int low, int size)
{
	size_t i = 0, L = low, m = 0, R = size - 1;

	if (array == NULL)
		return (-1);

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		m = (int)(L + (R - L) / 2);

		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * exponential_search -searches for a value in a sorted array of integers
 * using the exponential search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int bound = 1, max;

	if (array == NULL || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound >= size)
		max = size - 1;
	else
		max = bound;

	printf("Value found between indexes [%d] and [%u]\n", bound / 2, max);
	return (binary_search_exponencial(array, value, bound / 2, max));
}
