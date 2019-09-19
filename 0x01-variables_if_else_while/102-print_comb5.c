#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j, m, n, o, p;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
			if (i < j)
			{
				m = i / 10 + 48;
				n = i % 10 + 48;
				putchar(m);
				putchar(n);
				putchar(32);
				o = j / 10 + 48;
				p = j % 10 + 48;
				putchar(o);
				putchar(p);
				if (!(m == 57 && n == 56 && o == 57 && p == 57))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);
	return (0);
}
