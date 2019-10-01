#include "holberton.h"

/**
 * _strcpy - copy src string in dest.
 * @src: pointer to an array source.
 * @dest: pointer to an array destiny.
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i, legth;

	i = 0;
	while (*(src + i))
		i++;

	legth = i;
	i = 0;
	while (i <= legth)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
