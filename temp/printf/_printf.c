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
        va_list arg;
        int i, characters_printed;
        char buffer[1024];

        va_start (arg, format);


	va_end (arg);
        return (characters_printed);
}
