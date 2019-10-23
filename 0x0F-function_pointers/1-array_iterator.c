#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on the array.
 * @array: array to process with a given function
 * @size: size of the array.
 * @action: function to use with the given array.
 *
 * Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action != NULL && array != NULL)
	{
		while (i < size)
			action(*(array + i++));
	}
}
