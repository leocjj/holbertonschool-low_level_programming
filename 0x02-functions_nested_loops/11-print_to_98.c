#include "holberton.h"

/**
 * print_to_98 - prints the digits from n to 98.
 * @n: The integer to begin counting.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			int temp = n % 10;

			if (n < 0)
			{
				temp = temp * -1;
				_putchar('-');
				if (n / 10 != 0)
					_putchar(-n / 10 + '0');
			}
			else
			{
				if (n / 10 != 0)
					_putchar(n / 10 + '0');
			}
			_putchar(temp % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			if (n / 100 != 0)
				_putchar(n / 100 + '0');
			_putchar((n % 100) / 10 + '0');
			_putchar(n % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n == 98)
	{
		_putchar('9');
		_putchar('8');
		_putchar('\n');
	}
}
