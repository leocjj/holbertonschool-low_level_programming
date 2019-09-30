#include "holberton.h"

/**
 * swap_int - change the value of two integer passed as pointers in parameter..
 * @a: pointer to an integer passed as parameter.
 * @b: pointer to an integer passed as parameter.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
