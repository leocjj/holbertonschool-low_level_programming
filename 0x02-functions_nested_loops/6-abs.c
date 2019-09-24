#include "holberton.h"

/**
 * _abs - Calculate absolute value of an integer.
 * @n: The integer to evaluate is absolute value.
 *
 * Return: absolute value of n.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	return (-n);
}
