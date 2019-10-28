#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - function that prints formated text in standard output.
 * @format: text and format to be printed.
 *
 * Return: number of characters printed. -1 on error.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, j = 0, count_conversion = 0, chars_printed = 0;
	char buffer[buffer_size];

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	free_temp(buffer);
	va_start(args, format);

	for (i = 0, j = 0; *(format + i) != '\0'; i++, j++)
	{
		if (*(format + i) == '%')
		{
			count_conversion = count_id(format + i);
			if (count_conversion == 0)
				continue;
			switch (*(format + i + 1))
			{
			case 'c':
				concat_c(buffer, va_arg(args, int), &chars_printed);
				i++;
				break;
			case 's':
				j += concat(buffer, va_arg(args, char *), &chars_printed) - 1;
				i++;
				break;
			case '%':
				concat_c(buffer, '%', &chars_printed);
				i++;
				break;
			case 'd':
			case 'i':
				j += concat_i(buffer, va_arg(args, int), &chars_printed) - 1;
				i++;
				break;
			default:
				concat_c(buffer, '%', &chars_printed);
			}
		}
		else
			concat_c(buffer, *(format + i), &chars_printed);
	}
	chars_printed = write(1, buffer, j);
	va_end(args);
	return (chars_printed);
}
