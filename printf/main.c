#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("Ch:[%c] mas:[%c] \n", 'H', 'Z');
	printf ("Ch:[%c] mas:[%c] \n", 'H', 'Z');
	_printf("Str:[%s] char:[%c]\n", "I'm a string !", 'X');
	printf ("Str:[%s] char:[%c]\n", "I'm a string !", 'X');
	_printf("Str:[%s] char:[%c]\n", NULL, 'X');
	printf ("Str:[%s] char:[%c]\n", NULL, 'X');
	_printf("Str:[%s] char:[%c]\n", "I'm a string !", 0);
	printf ("Str:[%s] char:[%c]\n", "I'm a string !", 0);
	printf ("Pruega de porcentaje\n");
	_printf("_%_\n");
	printf ("-%-\n");
	printf ("Pruega de doble porcentaje\n");
	_printf ("_%%_\n");
	printf ("-%%-\n");
	printf ("Pruega de char *0\n");
	_printf("_Str:[%s] char:[%c]\n", "I'm!", (char*)0);
	printf ("-Str:[%s] char:[%c]\n", "I'm!", (char*)0);
	_printf("_%s\n");
	printf ("-%c\n");
	_printf("_%s\n");
	printf ("-%c\n");

	return (0);
}
