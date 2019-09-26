#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always zero.
 */
int main(void)
{
	long int n, i, lpf;

	n = 612852475143;
	lpf = -1;
	i = 2;

	while (n != 0)
	{
		if (n % i != 0)
			i = i + 1;
		else
		{
			lpf = n;
			n = n / i;
			if (n == 1)
			{
				printf("%li", lpf);
				break;
			}
		}
	}
	return (0);
}
