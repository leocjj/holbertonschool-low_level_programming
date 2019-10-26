#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print all parameter with format.
 * @format: string to specify format. c: char, i: integer, f: float, s: char *
 * (if the string is NULL, print (nil) instead. Any other should be ignored.
 *
 * Return: void.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, size = 0, tempo = 0;
	va_list args;
	char *temp;

	if (format == NULL || *format == 0)
	{
		printf("\n");
		return;
	}
	va_start(args, format);
	while (*(format + size) != '\0')
		size++;

	while (i < size)
	{
		switch (*(format + i))
		{
		case 'c':
			tempo = va_arg(args, int);
			if (tempo == 0)
				printf("(nil)");
			else
				printf("%c", tempo);
			break;
		case 'i':
			printf("%i", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			temp = va_arg(args, char *);
			if (temp == NULL)
				printf("(nil)");
			else
				printf("%s", temp);
			break;
		default:
			i++;
			continue;
		}
		if (i < size - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}
