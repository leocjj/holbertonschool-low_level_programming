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
	char cond[] = { 32, 9, '\n', 44, 59, 46, 33, 63, 34, 40, 41, 123, 125 };

	i = 0;
	while (*(s + i))
	{

		for (j = 0; j <= 12; j++)
			if (*(s + i) == cond[j])
				if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
					*(s + i + 1) -= 32;
		i++;
	}

	return (s);
}
