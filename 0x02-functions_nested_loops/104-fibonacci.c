#include <stdio.h>

/**
 * main - Entry point
 * @c: The character to print
 *
 * Return: void
 */
void main(void)
{
	unsigned long int i, n1, n2, temp;

	n1 = 1;
	n2 = 2;
	temp = 0;
	printf("%lu, ", n1);
	for(i = 1; i <= 98; i++)
	{
		printf("%lu", n2);
		if (i != 98)
			printf(", ");
		else
			printf("\n");
		temp = n2;
		n2 = n1 + n2;
		n1 = temp;
	}
}
