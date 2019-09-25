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

	if (n > 1 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int temp = i * j;

				if (j == 0)
					_putchar('0');
				else
				{
					if (temp < 100)
						_putchar(' ');
					else
						_putchar(temp / 100 + '0');
					if (temp < 10)
						_putchar(' ');
					else
						_putchar((temp % 100) / 10 + '0');
					_putchar(temp % 10 + '0');
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
