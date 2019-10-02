#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <time.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, offset, total;
	char c[50] = "";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	temp = n % 10;

	write(1, "1", 1);
	srand(time(0));

	total = 0;
	{
		offset = 33 + rand() % 94;
		c[i] = offset;
		total += c[i];
	}
	c[i] = 2772 - total;
	i++;
	c[i] = '\0';

	printf("%s", c);

	return (0);



	return (0);
}
