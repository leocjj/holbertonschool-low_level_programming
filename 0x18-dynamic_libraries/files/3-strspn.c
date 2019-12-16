#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to source
 * @accept: pointer to accept string
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, cont, ap, at;

	i = 0;
	ap = 0;
	at = 0;
	cont = 0;

	while (*(s + i))
	{
		j = 0;
		while (*(accept + j) && !ap)
		{
			if (*(s + i) == *(accept + j))
			{
				ap = 1;
				break;
			}
			j++;
		}
		if (ap)
		{
			at = 0;
			j = 0;
			while (*(accept + j))
			{
				if (*(s + i) == *(accept + j))
				{
					cont++;
					at = 1;
				}
				j++;
			}
			if (!at)
				return (cont);
		}
		i++;
	}

	return (cont);
}
