#include "holberton.h"

/**
 * _isalpha - check the code for Holberton School students.
 * @c: The character to print
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
