#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

#include <stdio.h>
/**
 * _printf - function that prints formated text in standard output.
 * @format: text and format to be printed.
 *
 * Return: number of characters printed..
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, temp_d = 0, count_conversion = 0, chars_printed = 0;
	double temp_f = 0.0;
	char *buffer = NULL, *temp_s = NULL;

	(void) temp_f;

	if (format == NULL)
		return (0);

	buffer = malloc(1024 * sizeof(char));
	if (buffer == NULL)
		return (0);
	temp_s = malloc(1024 * sizeof(char));
	if (temp_s == NULL)
		return (0);

        va_start(args, format);

        for (i = 0, j = 0; *(format + i) != '\0'; i++, j++)
	{
		if (*(format + i) == '%')
		{
			count_conversion = count_id(format + i);
			if (count_conversion == 0)
				break;
			/*char *temp = checkformat(format + i, args);*/
			if(*(format + i + count_conversion) == 'c')
			{
				temp_d = va_arg(args, int);	/*if (temp_d == 0)] ????*/
				*(temp_s + 0) = temp_d;
				*(temp_s + 1) = '\0';
				temp_s = concatenate(buffer, temp_s);
				if (temp_s != NULL)
					buffer = temp_s;
			}
			if(*(format + i + count_conversion) == 's')
			{
				temp_s = va_arg(args, char *);
				temp_s = concatenate(buffer, temp_s);
				if (temp_s != NULL)
					buffer = temp_s;
			}
			i += count_conversion;
		}
		else
			*(buffer + j) = *(format + i);/* Adds a char to buffer */
	}

	chars_printed = write(1, buffer, j);

	va_end (args);
	free(buffer);
        return (chars_printed);
}
