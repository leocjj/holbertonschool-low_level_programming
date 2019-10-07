#include <stdio.h>

/**
 * _strstr -finds the first occurrence of a substring
 * @haystack: pointer to source
 * @needle: pointer to string to search for
 *
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, n;

	i = 0;
	j = 0;
	n = 0;

	if (*(needle) == '\0')
		return (haystack);

	while (*(needle + n))
		n++;

	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle + j))
		{
			while (j < n)
			{
				if (*(haystack + i + j) != *(needle + j))
					return (NULL);
				j++;
			}
			return (haystack + i);
		}
		i++;
	}

	return (NULL);
}
