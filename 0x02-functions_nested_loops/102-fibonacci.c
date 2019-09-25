#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long n[50];

	n[0] = 1;
	n[1] = 2;

	for (i = 2; i < 50; i++)
		n[i] = n[i - 1] + n[i - 2];
	for (i = 0; i < 49; i++)
		printf("%li, ", n[i]);
	printf("%li\n", n[49]);

	return (0);
}
