#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - function that prints formated text in standard output
 * @format: text and format to be printed.
 *
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
        va_list args;
        int i, characters_printed;
        char buffer[1024];

        va_start (args, format);

        for (i = 0; *format != NULL; format++)
	{
		if (*(format) == '%')
			if (*(format - 1) != '\\')
			{
				char *temp = checkformat(&format , args)
				buffer = concatenate(buffer, temp);
			}
			else
				buffer = concatenate(buffer, "%");
		else
			buffer = concatenate(buffer, *format);
	}

	va_end (args);
        return (characters_printed);
}
