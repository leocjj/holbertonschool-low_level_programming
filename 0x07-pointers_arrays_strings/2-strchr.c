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
	unsigned int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}

	if (*(s + i) == c)
		return (s + i);

	return (NULL);
}
