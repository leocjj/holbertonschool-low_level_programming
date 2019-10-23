#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program
 * @argc: number of parameter given to main.
 * @argv: double pointer with parameter given to main.
 *
 * Return: result of the operation.
 */

int main(int argc, char **argv)
{
	int bytes = 0;
	unsigned char *ch = (char *) main;
	FILE *fp;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(*(argv + 1));
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while(bytes--)
		printf("%02x ", *(ch++));

	return (0);
}
