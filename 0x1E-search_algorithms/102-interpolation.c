#include <stdio.h>

/**
 * interpolation_search -searches for a value in a sorted array of integers
 * using the interpolation search algorithm.
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where value is located or -1 otherwise
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	mid = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	if (mid >= (int)size)
		printf("Value checked array[%d] is out of range\n", mid);

	while ((array[low] != array[high]) && (array[low] <= value) &&
			(value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	return (-1);
}
