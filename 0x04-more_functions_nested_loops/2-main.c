#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = -10; a <= 10; a++)
	{
		for (b = -10; b <= 10; b++)
			     printf("%d", mul(a, b));
		printf("\n");
	}
	return (0);
}
