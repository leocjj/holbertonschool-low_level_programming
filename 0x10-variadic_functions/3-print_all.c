#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all parameter with format.
 * @format: string to specify format. c: char, i: integer, f: float, s: char *
 * (if the string is NULL, print (nil) instead. Any other should be ignored.
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, separator = 1;
	va_list args;
	char *temp;

	while (format)
	{
		va_start(args, format);
		while (*(format + i))
		{
			separator = 1;
			switch (*(format + i))
			{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				temp = va_arg(args, char *);
				if (temp == NULL)
					temp = "(nil)";
				printf("%s", temp);
				break;
			default:
				separator = 0;
				break;
			}
			if (*(format + i + 1) && separator)
				printf(", ");
			i++;
		}
		va_end(args);
		break;
	}
	printf("\n");
}
