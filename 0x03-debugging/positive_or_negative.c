#include <stdio.h>

/**
 * main - Entry point
 * @i: integer to evaluate.
 *
 * Return: void.
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	if (i < 0)
		printf("%d is negative\n", i);
	if (i == 0)
		printf("%d is zero\n", i);
}
