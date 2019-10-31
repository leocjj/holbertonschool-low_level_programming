#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - function that prints formated text in standard output.
 * @format: text and format to be printed.
 *
 * Return: number of characters printed..
 */

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, size = 0;
	char b[] = {'\0', '\0'};
	char *temp_c = b, *temp_s;

	if (format == NULL)
		return (0);

	va_start(args, format);

	for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
		{
			switch (*(format + i + 1))
			{
			case 'c':
				*(temp_c) = va_arg(args, int);
				if (temp_c)
					write(1, temp_c, 1);
				break;
			case 's':
				temp_s = va_arg(args, char *);
				if (temp_s)
				{
					size = size_temp(temp_s);
					write(1, temp_s, size);
				}
				else
					write(1, "(null)", 6);
				break;
			default:
				*temp_c = *(format + i + 1);
				write(1, temp_c, 1);
			}
			i++;
		}
		else
		{
			*temp_c = *(format + i);
			write(1, temp_c, 1);
		}
	}

	va_end(args);
	return (i);
}
