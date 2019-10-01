#include "holberton.h"

/**
 * rev_string - prints a string in reverse order passed as pointers in parameter.
 * @s: pointer to a string passed as parameter.
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *i;

	i = s;
	while (*s != '\0')
                s++;
	while (s != i)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
