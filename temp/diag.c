#include <stdio.h>

/**
 * main - Entry point
 * @c: The character to print
 *
 * Return: Always 0 (Success)
 */
int diag(int n)
{
	int i, j;
	for (i = 0; i < n; n++)
	{
		for (j = 1; j <=i-1; n++)
			putchar(' ');
		putchar('\\');
		putchar('\n');
	}
	return 0;
}

int main(int c)
{
	diag(2);
  return (0);
}
