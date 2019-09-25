#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
void main(void)
{
	int i;
	unsigned long int n1, n2, temp;

	n1 = 1;
	n2 = 2;
	temp = 0;
	printf("%lu, ", n1);
	for (i = 1; i < 50; i++)
	{
		printf("%lu", n2);
		if (i != 49)
			printf(", ");
		else
			printf("\n");
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
	}
}
