#include <stdio.h>

/**
 * cap_string - changes first leter of a word to uppercase
 * @s: string to change to uppercase
 *
 * Return: *s
 */
char *cap_string(char *s)
{
	int i, j;
	char cond[] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	i = 0;
	while (*(s + i))
	{

		for (j = 0; j <= 12; j++)
			if (*(s + i) == cond[j])
			{
				if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
					*(s + i + 1) -= 32;
				break;
			}
		i++;
	}

	return (s);
}
