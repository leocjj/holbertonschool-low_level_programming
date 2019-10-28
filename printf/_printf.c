#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

#include <stdio.h>

/**
 * _printf - function that prints formated text in standard output.
 * @format: text and format to be printed.
 *
 * Return: number of characters printed. -1 on error
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, count_conversion = 0, chars_printed = 0;
	char buffer[buffer_size];

	if (format == NULL)
		return (-1);

	free_temp(buffer);
	va_start(args, format);

	for (i = 0, j = 0; *(format + i) != '\0'; i++, j++)
	{
		if (*(format + i) == '%')
		{
			count_conversion = count_id(format + i);
			if (count_conversion == 0)
				break;
			/*char *temp = checkformat(format + i, args);*/
			if (*(format + i + count_conversion) == 'c')
				concat_c(buffer, args);
			if (*(format + i + count_conversion) == 's')
				j += concat(buffer, va_arg(args, char *)) - 1;
			i += count_conversion;
		}
		else
			*(buffer + j) = *(format + i);/* Adds a char to buffer */
	}
	chars_printed = write(1, buffer, j);
	va_end(args);
	return (chars_printed);
}
