#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, lenn;

	len = _printf("Let's try to printf a simple sentence.\n");
	lenn = printf("Let's try to printf a simple sentence.\n");
	printf("len: %d  lenn:%d", len, lenn);
	_printf("Ch:[%c] mas:[%c] \n", 'H', 'Z');
	printf ("Ch:[%c] mas:[%c] \n", 'H', 'Z');
	_printf("Str:[%s] char:[%c]\n", "I'm a string !", 'X');
	printf ("Str:[%s] char:[%c]\n", "I'm a string !", 'X');
	_printf("Str:[%s] char:[%c]\n", NULL, 'X');
	printf ("Str:[%s] char:[%c]\n", NULL, 'X');
	_printf("Str:[%s] char:[%c]\n", "I'm a string !", 0);
	printf ("Str:[%s] char:[%c]\n", "I'm a string !", 0);

	return (0);
}
