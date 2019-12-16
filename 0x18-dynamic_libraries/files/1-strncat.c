#include <stdio.h>

/**
 * _strncat - Concatenates two strings
 * @dest: The destiny string
 * @src: The source string
 * @n: number of character to copy from src
 *
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;

	while (*(dest + i))
		i++;

	while (*src && n)
	{
		*(dest + i) = *src;
		i++;
		src++;
		n--;
	}
	*(dest + i) = '\0';

	return (dest);
}
