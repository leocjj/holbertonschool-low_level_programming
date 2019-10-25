#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * checkformat - function that prints formated text in standard output
 * @str: Character to be evaluated.
 * @args: Variable type va_list with the amount of arguments.
 * Return: number of characters printed.
 */

char *checkformat(char *str, va_list args)
{
	char *result;
	va_list args;


	if (str == NULL)
	{
		return "";
	}
	if (args == NULL)
	{
		return "";
	}
	if (str == c)
	{
		result = va_arg(args, int);
	}
	if (str == s)
	{
		result = va_arg(args, char*);
	}
	if (str == %)
	{
		return "%";
	}


        return (retult);
}
