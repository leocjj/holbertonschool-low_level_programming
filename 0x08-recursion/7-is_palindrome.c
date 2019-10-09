#include "holberton.h"

/**
 * last - looks for the last char of a string.
 * @s: string to evaluate
 *
 * Return: returns pointer to the last char of a string.
 */

char *last(char *s)
{
	if (*s == '\0')
		return (s - 1);
	else
		return(last (s + 1));
}

/**
 * is_pal - evaluates a palinddrome string
 * @s: strint to evaluate
 *
 * Return: returns 1 if the string is palindrome, otherwise return 0
 */

int is_pal(char *s, char *ss)
{
	if (*s != *ss)
		return (0);
	if (s >= ss)
		return (1);
	else
		return(is_pal (s + 1, ss - 1));
}
/**
 * is_palindrome - evaluates if the string is palindrome
 * @c: string
 *
 * Return: returns 1 if the string is palindrome, otherwise return 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (is_pal(s, last(s)));
}
