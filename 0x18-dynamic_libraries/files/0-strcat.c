#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destiny string
 * @src: The source string
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	while (*(dest + i))
		i++;

	while (*src)
	{
		*(dest + i) = *src;
		i++;
		src++;
	}
	*(dest + i) = '\0';

	return (dest);
}
