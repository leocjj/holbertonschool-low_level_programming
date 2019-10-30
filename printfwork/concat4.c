#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * concat_S - Function that concatenate two strings.
 * @s1: string to which it should be added.
 * @s2: String to be add.
 * @chars_printed: chars printed.
 *
 * Return: number of character added.
 */
int concat_S(char *s1, char *s2, int *chars_printed)
{
	int size_of_s1 = 0, size_of_s2 = 0, j = 0, i = 0, k = 0, cs = 0;
	char *n = "(null)", *temp, *s3;

	if (s1 == NULL)
	{
		return (0);
	}
	else
		while (s1[size_of_s1] != '\0')
			size_of_s1++;

	if (s2 == NULL)
	{
		s2 = n;
		size_of_s2 = 6;
	}
	else
	{
		while (s2[size_of_s2] != '\0')
			size_of_s2++;
	}

	while (i = 0; s2[i] != '\0'; i++)
	{
		if ((s2[i] >= 0 && s2[i] < 32) || (s2[i] >= 127))
			cs++;
	}

	s3 = malloc(sizeof(char) * (size_of_s2 + (cs * 3) + 1));
	if (s3 == NULL)
		return ('\0');

	for(i = 0, k = 0; s2[i] != '\0'; i++, k++)
	{
		if ((s2[i] >= 0 && s2[i] < 32) || (s2[i] >= 127))
		{
			s3[k] = '\\';
			k++;
			s3[k] = 'x';
			k++;
			s3[k] = hex_h(c);
			k++;
			s3[k] = hex_l(c);
		}
		else
		{
			s3[k] = s2[i];
		}
	}

	if (size_of_s1 + size_of_s2 + 1 > buffer_size)
	{
		temp = concat_s(s1, s2);
		*chars_printed += write(1, temp, size_of_s1 + size_of_s2);
		free(temp);
		free_temp(s1);
		size_of_s1 = 0;
	}
	else
	{
		for (j = 0; j < size_of_s2; j++)
			s1[size_of_s1 + j] = s2[j];
		s1[size_of_s1 + size_of_s2 + 1] = '\0';
	}

	return (size_of_s2);
}

/**
 * hex_h - Function that returns hexadecimal high of a char.
 * @c: char to convert to hex.
 * Return: hexadecimal high of a char
 */
int hex_h(char c)
{
	if ((c % 16) >= 1)
		c /= 16;
	if (c <= 9)
		return (c + '0');
	else
		return (c + 'A');
}

/**
 * hex_l - Function that returns hexadecimal low of a char.
 * @c: char to convert to hex.
 * Return: hexadecimal low of a char
 */
int hex_l(char c)
{
	c %= 16;
	if (c <= 9)
		return (c + '0');
	else
		return (c + 'A');
}
