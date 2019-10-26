#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 *
 * Return: sum of all its parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0, sum_all = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	while (i < n)
	{
		sum_all += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (sum_all);
}
