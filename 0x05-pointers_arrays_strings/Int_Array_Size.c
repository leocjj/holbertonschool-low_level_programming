#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[] = {10, 5, 15, 12, 90, 80};
	int n = sizeof(arr) / sizeof(arr[0]), i = 0;

	while (i < n )
		printf("%d", arr[i++]);

	return (0);
}
