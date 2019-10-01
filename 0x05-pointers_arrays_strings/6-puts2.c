#include "holberton.h"

/**
 * puts2 - prints every other character of a string passed as pointer.
 * @str: pointer to a string passed as parameter.
 *
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
