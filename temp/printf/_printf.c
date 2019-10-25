#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

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

        for (i = 0; *(format + i) != NULL; i ++)
	{
		if (*(format + i) == '%')
			if (*(format + i - 1) != '\\')
			{
					char *temp = checkformat((format + i), args)
					buffer[i] = concatenate(buffer, temp);
			}
			else
				buffer[i] = '%';
		else
			buffer[i] = *(format + i);
	}

	va_end (args);
        return (characters_printed);
}
