#include <stdio.h>

/**
 * print_name - print a name passed as parameter using a passed function.
 * @name: name to print.
 * @f: pointer to a function f to print name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
