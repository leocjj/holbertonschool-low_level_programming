#include "holberton.h"

/**
 * factorial - function that calculates factorial of a number
 * @n: integer
 *
 * Return: void
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
