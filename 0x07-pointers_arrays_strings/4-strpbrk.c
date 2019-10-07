#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to source
 * @accept: pointer to string to search for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	i = 0;
	while (*(s + i))
	{
		j = 0;
		while (*(accept + j))
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
	}

	return (NULL);
}
