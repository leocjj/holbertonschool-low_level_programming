#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * ispositive - evaluates if a string is a positive integer
 * @s: string to evaluate.
 *
 * Return: 0 (Success), 1 (Error)
 */
int ispositive(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
		if (!isdigit(*(s + i)))
			return (0);
	return (1);
}

/**
 * main - adds arguments
 * @argc: number of arguments.
 * @argv: array of pointer with arguments for main function.
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char **argv)
{
	int i, sum;

	sum = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!ispositive(*(argv + i)))
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(*(argv + i));
		}
		printf("%d\n", sum);
		return (0);
	}
}
