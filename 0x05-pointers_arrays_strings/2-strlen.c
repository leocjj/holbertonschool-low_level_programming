#include "holberton.h"

/**
 * _strlen - change the value of two integer passed as pointers in parameter.
 * @s: pointer to a string passed as parameter.
 *
 * Return: length of string s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++ != '\0')
		i++;
	return (i);
}
