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
        int i = 0, count = 0, chars_printed = 0;
        char *buffer;

	buffer = malloc(1024);
        va_start(args, format);

        for (i = 0; *(format + i) != '\0'; i++)
	{
		if (*(format + i) == '%')
			if (*(format + i - 1) != '\\')
			{
				count = count_id(format + i);
                                if (count == 0)
					break;
				/*char *temp = checkformat(format + i, args);*/
				if(*(format + i + 1) == 'c')
					buffer = concatenate(buffer, va_arg(args, char *));
			}
			else
			{
				buffer = concatenate(buffer, "%");
				i++;/* Jump over the second % */
			}
		else
			*(buffer + i) = *(format + i);/* Adds a char to buffer */
	}

	write(1, buffer, i);

	va_end (args);
        return (chars_printed);
}
