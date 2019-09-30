#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;
	int a[]={1,2,3};

	str = "Holberton!";
	len = _strlen(str);
	printf("%lu\n", sizeof(a));
	printf("%d\n", len);
	return (0);
}
