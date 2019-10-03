#include <stdio.h>

/**
 * cap_string - changes first leter of a word to uppercase
 * @s: string to change to uppercase
 *
 * Return: *s
 */
char *cap_string(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == ',' || *(s + i) == ';' || *(s + i) == '.' || *(s + i) == '!' || *(s + i) == '?' || *(s + i) == '"' || *(s + i) == '(' || *(s + i) == ')' || *(s + i) == '{' || *(s + i) == '}' || *(s + i) == ' ' || *(s + i) == 9 || *(s + i) == '\n')
			if (*(s + i + 1) >= 'a' && *(s + i + 1) <= 'z')
				*(s + i + 1) -= 32;
		i++;
	}

	return (s);
}
