#include <stdio.h>

/**
 * cap_string - changes first leter of a word to uppercase
 * @s: string to change to uppercase
 *
 * Return: *s
 */
char *cap_string(char *s)
{
	int i, j, flag;
	char cond[] = { 32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125 };

	i = 0;
	flag = 1;
	while (*(s + i))
	{
		if (*(s + i) >= 'A' && *(s + i) <= 'Z')
			flag = 0;
		else if (*(s + i) >= '0' && *(s + i) <= '9')
			flag = 0;
		else if (*(s + i) >= 'a' && *(s + i) <= 'z' && flag)
		{
			*(s + i) -= 32;
			flag = 0;
		}
		for (j = 0; j <= 12; j++)
			if (*(s + i) == cond[j])
				flag = 1;
		i++;
	}

	return (s);
}
