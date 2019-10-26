#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers(", ", 0 );
	print_numbers("", 4, 0, 98, -1024, 402);
	print_numbers(NULL, 4, 0, 98, -1024, 402);
	print_numbers(" ", 6, 4, 98, -1024, 402, "A", 5);
	print_numbers(", ", 3, 0, 98, -1024, 402);
	return (0);
}
