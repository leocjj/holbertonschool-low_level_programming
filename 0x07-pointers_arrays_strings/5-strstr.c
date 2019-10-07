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
	unsigned int i, j;

	i = 0;
	j = 0;
	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle + j))
		{
			while (*(haystack + i + j) && *(needle + j))
			{
				if (*(haystack + i + j) != *(needle + j))
					return (NULL);
				j++;
			}
			if (!*(haystack + i + j) && *(needle + j))
				return (NULL);
			return (haystack + i);
		}
		i++;
	}

	return (NULL);
}
