#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
void main(void)
{
	int i, contar3, contar5;

	contar3 = 0;
	contar5 = 0;
	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0)
			contar3 += i;
		if (i % 5 == 0)
			contar5 += i;
	}
	printf("%d\n", contar3 + contar5);
}
