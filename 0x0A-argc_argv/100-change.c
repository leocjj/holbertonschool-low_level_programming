#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * ispositive - evaluates if a string is a positive integer.
 * @s: string to evaluate
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
	int value, coins;

	value = coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		value = atoi(*(argv + 1));
		if (value < 0)
			printf("0\n");
		if (value == 0)
		{
			printf("0\n");
			return (0);
		}
		if (value / 25 >= 1)
		{
			coins = value / 25;
			value %= 25;
		}
		if (value / 10 >= 1)
		{
			coins += value / 10;
			value %= 10;
		}
		if (value / 5 >= 1)
		{
			coins += value / 5;
			value %= 5;
		}
		if (value / 2 >= 1)
		{
			coins += value / 2;
			value %= 2;
		}
		coins += value / 1;

		printf("%d\n", coins);
		return (0);
	}
}
