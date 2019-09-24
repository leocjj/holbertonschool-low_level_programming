#include "holberton.h"

/**
 * times_table - prints the 9 times table.
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int temp = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				if (temp / 10 == 0)
					_putchar(' ');
				else
					_putchar(temp / 10 + '0');
				_putchar (temp % 10 + '0');
			}
			if (j != 9)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
