#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;
	t = _strstr(s, f);
	printf("%s\n", t);

	s = "First, solve the problem. Then, write the code.";
	f = "solve";
	t = _strstr(s, f);
	printf("%s\n", (t == NULL ? "nil" : t));

        s = "hello, worl";
        f = "world";
        t = _strstr(s, f);
        printf("%s\n", (t == NULL ? "nil" : t));

        s = "hello, world";
        f = "worl";
        t = _strstr(s, f);
        printf("%s\n", (t == NULL ? "nil" : t));

        s = "world";
        f = "world";
        t = _strstr(s, f);
        printf("%s\n", (t == NULL ? "nil" : t));

        s = "hello, world";
        f = "world";
        t = _strstr(s, f);
        printf("%s\n", (t == NULL ? "nil" : t));



	return (0);
}
