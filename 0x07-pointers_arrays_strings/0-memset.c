#include <stdio.h>

/**
 * _memset - fills the first n bytes of the mem pointed to by s with the byte b
 * @s: pointer to mem
 * @b: character to white into mem
 * @n: first n bytes of mem to write
 *
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}
