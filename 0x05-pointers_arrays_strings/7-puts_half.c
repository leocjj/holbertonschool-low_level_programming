#include "holberton.h"

/**
 * puts_half - prints second half of a strig passed as pointer.
 * print last n characters, n = (length_of_the_string - 1) / 2
 * @str: pointer to a string passed as parameter.
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	/* i will be the legth of str. Counts until *str == '\0'*/
	while (*str++)
		i++;
	/* if legth is pair, return str to the half of the string.
	   + 1 because in counting, i went to '\n' character inclusive*/
	if (i % 2 == 0)
		str -= i / 2 + 1;
	/* if lecth is odd, return str to half minus 1. Additional -1 is
	   because of i went to '\n' when counting */
	else
		str -= (i + 1) / 2 + 1;
	/* print str with putchar and POST-increment.*/
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
