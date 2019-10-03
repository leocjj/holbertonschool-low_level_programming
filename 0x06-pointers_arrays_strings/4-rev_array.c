#include <stdio.h>

/**
 * reverse_array - reverse an array of integer
 * @a: array of integer
 * @n: size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int  i, temp;

	i = 0;
	while (i < n)
	{
		temp = *(a + i);
		*(a + i) = *(a + n - 1);
		*(a + n - 1) = temp;
		i++;
		n--;
	}
}
