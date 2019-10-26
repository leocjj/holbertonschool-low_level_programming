#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int sum;

	sum = sum_them_all(1, 984);
	printf("%d\n", sum);
	sum = sum_them_all(0, 2);
	printf("%d\n", sum);
	sum = sum_them_all(0);
	printf("%d\n", sum);
	sum = sum_them_all(2, 98, 1024);
	printf("%d\n", sum);
	sum = sum_them_all(1);
	printf("%d\n", sum);
	sum = sum_them_all(1, 8);
	printf("%d\n", sum);
	return (0);
}
