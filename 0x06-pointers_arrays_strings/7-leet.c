#include <stdio.h>

/**
 * leet - changes leters with 1337
 * @s: string to change
 *
 * Return: *s
 */
char *leet(char *s)
{
	int i, j;
	char cod1[] = { 'A', 'E', 'O', 'T', 'L'};
	char cod2[] = { 'a', 'e', 'o', 't', 'l'};
	char leed[] = { '4', '3', '0', '7', '1'};

	i = 0;
	while (*(s + i))
	{
		for (j = 0; j <= 4; j++)
		{
			if (*(s + i) == *(cod1 + j) || *(s + i) == *(cod2 + j))
				*(s + i) = *(leed + j);
		}
		i++;
	}

	return (s);
}
