#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, temp;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	temp = n % 10;

	if (temp > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, temp);
	if (n == 0)
		printf("Last digit of %d is %d and is 0\n", n, temp);
	if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, temp);
	return (0);
}
