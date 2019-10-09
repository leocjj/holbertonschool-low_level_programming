#include "holberton.h"

/**
 * _puts_recursion - prints a string with recursion, followed by a new line.
 * @s: The character to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s);
	if (*(s + 1) != '\0')
		_puts_recursion(s + 1);
	else
		_putchar('\n');
}
