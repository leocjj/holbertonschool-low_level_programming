#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fb, m3, m5;

	for (fb = 1; fb <= 100; fb++)
	{
		m3 = fb % 3;
		m5 = fb % 5;
		if (m3 == 0)
			printf("Fizz");
		if (m5 == 0)
			printf("Buzz");
		if (m3 != 0 && m5 != 0)
			printf("%d", fb);
		if (fb != 100)
			printf(" ");
		/*
		 *else if (m3 == 0 && m5 != 0)
		 *	printf("Fizz ");
		 *else if (m3 != 0 && m5 == 0)
		 *	printf("Buzz ");
		 *else
		 *	printf("FizzBuzz ");
		 */
	}
	printf("\n");
	return (0);
}
