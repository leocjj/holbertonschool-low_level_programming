#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: matrix of integers.
 * @size: number of columns.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum;

	i = 0;
	sum = 0;
	while (i < size)
	{
		sum  += *(a + i * size + i);
		i++;
	}
	printf("%d, ", sum);
	i = 0;
	sum = 0;
	while (i < size)
	{
		sum  += *(a + (i + 1) * (size - 1));
		i++;
	}
	printf("%d\n", sum);

}
