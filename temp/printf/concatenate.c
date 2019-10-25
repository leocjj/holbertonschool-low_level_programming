#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * concatenate - Function that concatenate two strings.
 * @s1: string to which it should be added.
 * @s2: String to be add.
 * Return: String already concatenate.
 */

char *concatenate(char *s1, char *s2)
{
	int j, i, k, a;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		j++;
	}
	s = malloc(sizeof(char) * (i + j + 1));
	if (s == NULL)
	{
		return ('\0');
	}
	for (k = 0; k < i; k++)
	{
		s[k] = s1[k];
	}
	for (a = 0; a < j; a++)
	{
		s[i + a] = s2[a];
	}
	return (s);
