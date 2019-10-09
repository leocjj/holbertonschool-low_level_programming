#include "holberton.h"

/**
 * is_prime - evaluates if the input integer is a prime number
 * @n: integer
 * @c: integer
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime(int n, int c)
{
	if (c == 1)
		return (1);
	if (n % c == 0)
		return (0);
	else
		return (is_prime(n, c - 1));
}

/**
 * is_prime_number - evaluates if the input integer is a prime number
 * @n: integer
 *
 * Return: returns 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (is_prime(n, n / 2));
}
