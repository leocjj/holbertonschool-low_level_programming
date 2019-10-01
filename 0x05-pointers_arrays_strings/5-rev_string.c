#include "holberton.h"

/**
 * rev_string - reverse a string passed as pointers in parameter
 * @s: pointer to a string passed as parameter.
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	i = 0;
	j = 0;
	while (*(s + i) != '\0')
		i++;
	while (j <= i)
	{
		i--;
		temp = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = temp;
		j++;
	}
}
