#include <stdio.h>

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: *dest
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(s1 + i))
		i++;
	while (*(s2 + j))
		j++;
	return (i - j);
}
