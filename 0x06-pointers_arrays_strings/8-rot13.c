#include <stdio.h>

/**
 * rot13 - changes string with rot13
 * @s: string to change
 *
 * Return: *s
 */
char *rot13(char *s)
{
	int i, j;
	char cod[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (*(s + i))
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(s + i) == *(cod + j))
			{
				*(s + i) = *(rot + j);
				break;
			}
		}
		i++;
	}

	return (s);
}
