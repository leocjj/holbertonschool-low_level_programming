#include "holberton.h"

/**
 * print_chessboard - prints the chessboard.
 * @a: matrix to print
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(*a[i + j]);
			j++;
		}
		i++;
	}
}
