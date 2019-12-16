#include <stdio.h>

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: pointer to source
 * @needle: pointer to string to search for
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, m, n;
	char *p = NULL;

	i = 0;
	j = 0;
	n = 0;
	m = 0;
	if (!*(needle))
		return (haystack);
	while (*(haystack + m))
		m++;
	while (*(needle + n))
		n++;

	while (i < m)
	{
		j = 0;
		if (*(haystack + i) == *(needle + j))
		{
			p = (haystack + i);
			while (j < n)
			{
				if (*(haystack + i + j) != *(needle + j))
				{
					p = NULL;
					break;
				}
				j++;
			}
			if (j == n)
				i = m;
		}
		i++;
	}
	return (p);
}
