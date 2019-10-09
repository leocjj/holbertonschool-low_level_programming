#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: The string to length
 *
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (s == '\0')
		return 0;
	if (*(s + 1) == '\0')
		return (1);
	return (1 + _strlen_recursion(s + 1));
}
