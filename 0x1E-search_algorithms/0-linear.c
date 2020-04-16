#include <stdlib.h>
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * 
 * Every time you compare a value in the array to the value you are searching,
 * you have to print this value: "Value checked array[0] = [10]"
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 * 
 * Returns: first index where value is located or -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array == NULL)
        return -1;
    
    for(i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
        if (array[i] == value)
            return i;
    }
    return -1;
}
