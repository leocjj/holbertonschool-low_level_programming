#include "holberton.h"

/**
 * _puts - prints a string passed as pointers in parameter.
 * @str: pointer to a string passed as parameter.
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
