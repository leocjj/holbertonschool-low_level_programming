#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "Hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}

	f = _strchr(s, 'a');

        if (f != NULL)
        {
                printf("%s\n", f);
        }
	else
	{
		printf("Not found");
	}


	return (0);
}
