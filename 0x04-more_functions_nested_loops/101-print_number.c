#include "holberton.h"

/**
 * print_number - prints the number
 * @n: number to print
 * Return:none
 */

void print_number(int n)
{
	int i, digit, place, fake_bool;
	long j;
	char num[1000];

	place = 0;
	fake_bool = 0;
	j = n;
	if (j < 0)
	{
		j = j * -1;
		fake_bool = 1;
	}
	while ((j / 10) != 0)
	{
		digit = j % 10;
		num[place] = digit;
		place++;
		j = j / 10;
	}
	num[place] = j;
	if (fake_bool == 1)
	{
		place++;
		num[place] = '-';
	}
	for (i = place; i >= 0; i--)
	{
		if (num[i] != '-')
		{
			_putchar(num[i] + '0');
		}
		else
			_putchar('-');
	}
}
