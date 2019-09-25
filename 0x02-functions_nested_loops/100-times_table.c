#include "holberton.h"

/**
 * print_times_table - prints the times table.
 * @n: The integer to create table.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int i, j;

	if (n >= 1 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if ((i * j) < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if ((i * j) < 100)
				{
					_putchar(' ');
					_putchar(i * j / 10 + '0');
				}
				else
				{
					_putchar(i * j / 100 + '0');
					_putchar((i * j / 10) % 10 + '0');
				}
				_putchar(i * j % 10 + '0');
				if (j == n)
				{
					_putchar('\n');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
}
