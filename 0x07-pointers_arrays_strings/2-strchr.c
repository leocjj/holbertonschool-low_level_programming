#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: pointer to source
 * @c: byte to look for in source
 *
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
