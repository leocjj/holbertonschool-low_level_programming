#include "variadic_functions.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("ceis", 'H', 0, "lberton");
	print_all("", 'H', 0, "lberton");
	print_all("ceis", 'H', 0, NULL);
	print_all("ceis", 'A', -10, "D lberton");
	print_all("iaceis",1, 'H', 0, "lberton");
	print_all("ceis", 'H', 0, "lberton");
	return (0);
}
