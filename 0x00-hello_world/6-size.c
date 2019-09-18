#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a = 'a';
	int i = 1;
	long int o = 0;
	long long u = 0;
	float e = 0;

	printf("Size of a char: %lu byte(s)\n", sizeof(a));
	printf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(o));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(u));
	printf("Size of a float: %lu byte(s)\n", sizeof(e));
	return (0);
}
