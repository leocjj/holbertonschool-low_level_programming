#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * size_temp - Function that calculate the size of string.
 * @temp_s: string calculate size.
 *
 * Return: size of the string.
 */

int size_temp(char *temp_s)
{
	int j = 0;

	for (j = 0; j < buffer_size; j++)
		if (*(temp_s + j) == '\0')
			return (j);
	return (j);
}

/**
 * free_temp - Function to clear buffer.
 * @temp_s: buffer to be cleared
 *
 * Return: void
 */

void free_temp(char *temp_s)
{
	int j = 0;

	for (j = 0; j < buffer_size; j++)
		*(temp_s + j) = '\0';
}

/**
 * concat_i - Function that concatenate a strings with and int.
 * @buffer: string base to add the next parameter.
 * @integer: integer to add.
 * @chars_printed: chars printed.
 *
 * Return: void.
 */

void concat_i(char *buffer, int integer, int *chars_printed)
{
	int max = 1000000000, temp = 0;

	if (integer < 0)
	{
		concat_c(buffer, '-', chars_printed);
		concat_c(buffer, -(integer / max) + '0', chars_printed);
		integer %= max;
		integer *= -1;
		max /= 10;
	}
	while (integer / max == 0)
		max /= 10;

	if (integer == 0)
	{
		concat_c(buffer, '0', chars_printed);
		return;
	}
	while (max >= 1)
	{
		temp = integer / max;
		concat_c(buffer, temp + '0', chars_printed);
		integer -= max * temp;
		max /= 10;
	}
}


/**
 * concat_c - Function that concatenate a strings with a char.
 * @buffer: string base to add the next parameter.
 * @character: character to add.
 * @chars_printed: chars printed.
 *
 * Return: String already concatenate
 */
/*void concat_c(char *buffer, va_list args, int *chars_printed)*/
void concat_c(char *buffer, int character, int *chars_printed)
{
	char b[] = {'\0', '\0'};
	char *temp_c = b;

	/*temp_d = va_arg(args, int);	if (temp_d == 0)] ????*/
	if (character)
		*(temp_c + 0) = character;
	else
		*(temp_c + 0) = ' ';
	*(temp_c + 1) = '\0';
	concat(buffer, temp_c, chars_printed);
}

/**
 * concat - Function that concatenate two strings.
 * @s1: string to which it should be added.
 * @s2: String to be add.
 * @chars_printed: chars printed.
 *
 * Return: number of character added.
 */
int concat(char *s1, char *s2, int *chars_printed)
{
	int size_of_s1 = 0, size_of_s2 = 0, j = 0;
	char *n = "(null)";

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
		while (s2[size_of_s2] != '\0')
			size_of_s2++;

	if (size_of_s1 + size_of_s2 + 1 > buffer_size)
	{
		*chars_printed += write(1, s1, size_of_s1);
		free_temp(s1);
		size_of_s1 = 0;
	}

	for (j = 0; j < size_of_s2; j++)
		s1[size_of_s1 + j] = s2[j];

	s1[size_of_s1 + size_of_s2 + 1] = '\0';
	return (size_of_s2);
}
