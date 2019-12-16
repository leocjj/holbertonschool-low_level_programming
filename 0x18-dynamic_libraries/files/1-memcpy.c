#include <stdio.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: first n bytes of mem to copy
 *
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}

	return (dest);
}
