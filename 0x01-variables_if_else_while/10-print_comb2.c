#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int m, n;

	for (m = 48; m < 58; m++)
	{
		for (n = 48; n < 58; n++)
		{
			putchar(m);
			putchar(n);
			if (!(m == 57 && n == 57))
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
