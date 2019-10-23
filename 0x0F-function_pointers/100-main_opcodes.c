#include <stdio.h>
#include <stdlib.h>

/**
 * main - main program.
 * @argc: number of parameter given to main.
 * @argv: double pointer with parameter given to main.
 *
 * Return: result of the operation.
 */

int main(int argc, char **argv)
{
	int bytes = 0;
	char ch, *file_name;
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

	file_name = *(argv + 0);
	fp = fopen(file_name, "r");

	if (fp == NULL)
	{
		perror("Error opening file.\n");
		exit(EXIT_FAILURE);
	}

	printf("The contents of %s file are:\n", file_name);

	while(bytes--)
	{
		ch = fgetc(fp);
		printf("%x ", ch);
	}

	fclose(fp);
	return (0);
}
