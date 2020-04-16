#include <stdio.h>

/**
 * advanced_binary - searches for a value in a sorted array of integers using the
 * advanced binary search algorithm
 * Print the array being searched every time it changes. (e.g. at the beginning
 * and when you search a subarray): Searching in array: 0, 1, 2, 3, 4
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, L = 0, m = 0, R = size - 1;

	if (array == NULL)
		return (-1);

	while (L < R)
	{
		printf("Searching in array: ");
		for (i = L; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		m = (int)(L + (R - L) / 2);

		if (array[m] < value)
			L = m + 1;
		else
			R = m;
	}
	return (L);
}
