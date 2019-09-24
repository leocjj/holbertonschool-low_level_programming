#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - prints the digits from n to 98.
 * @n: The integer to begin counting.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n < 98)
		for (; n < 98; n++)
			printf("%d, ", n);
	if (n > 98)
		for (; n > 98; n--)
			printf("%d, ", n);
	if (n == 98)
		printf("%d\n", n);
}
