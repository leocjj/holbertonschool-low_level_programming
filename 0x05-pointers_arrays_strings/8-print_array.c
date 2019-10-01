#include <stdio.h>

/**
 * print_array - prints of n integers from an array of integers.
 * @a: pointer to an array of integer.
 * @n: number of integers to print.
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", *(a + i));
		i++;
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
