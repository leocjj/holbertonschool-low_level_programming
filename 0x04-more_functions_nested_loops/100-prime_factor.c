#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
/*
int isprime(int p)
{
	int k, flag;

	flag = 0;
	for(k = 2; k <= p/2; k++)
	{
		if (p % k == 0)
		{
			flag = 1;
			break;
		}
	}
	if (!flag)
		return (1);
	return (0);
}
*/
void main(void)
{
	long int n, i, lpf;

	n = 612852475143;
	lpf = -1;
	i = 2;

	while(n != 0)
	{
		if(n % i !=0 )
			i = i + 1;
		else {
			lpf = n;
			n = n / i;
			if(n == 1)
			{
				printf("%li", lpf);
				break;
			}
		}
	}
}
