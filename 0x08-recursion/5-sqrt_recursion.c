#include "holberton.h"

/**
 * _sqrt - functions to calculate the natural square root of a number
 * @n: integer to operate
 * @m: divisor to evaluate if is the square root of n
 *
 * Return: return square root of n
 */

int _sqrt(int n, int m)
{
	if (m == 1)
		return (-1);
	if (n == m * m)
		return (m);
	else
		return (_sqrt(n, m - 1));

}

/**
 * _sqrt_recursion - functions to calculate the natural square root of a number
 * @n: integer
 *
 * Return: square root of integer n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, n));
}
