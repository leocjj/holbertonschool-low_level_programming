#include <stdio.h>

/**
 * _strncpy - Concatenates two strings
 * @dest: The destiny string
 * @src: The source string
 * @n: number of character to copy from src
 *
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (*src && i < n)
	{
		*(dest + i) = *src;
		i++;
		src++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}

	return (dest);
}
