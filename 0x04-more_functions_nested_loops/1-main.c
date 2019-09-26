#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;

	for (c = 0; c <= 127; c++)
		printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
