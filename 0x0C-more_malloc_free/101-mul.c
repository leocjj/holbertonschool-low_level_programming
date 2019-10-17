#include <stdlib.h>
#include <stdio.h>

/**
 * digits - verify if only digits in string pased as parameter
 * @param: string to evaluate.
 *
 * Return: 1 (Success), 0 (Error)
 */

int digits(char *param)
{
	int i;

	for (i = 0; *(param + i) != '\0'; i++)
		if (!(*(param + i) >= '0' && *(param + i) <= '9'))
			return (0);
	return (1);

}

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments passed to main function.
 * @argv: strings of arguments.
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char **argv)
{
	char *num1 = NULL, *num2 = NULL;
	int size1 = 0, size2 = 0;

	num1 = *(argv + 1);
	num2 = *(argv + 2);
	if (argc != 3)
	{
		printf("Error\n");
		exit (98);
	}
	if (!digits(num1) || !digits(num2))
	{
		printf("Error\n");
		exit (98);
	}

	while (*(num1 + size1) != '\0')
			size1++;
	while (*(num2 + size2) != '\0')
			size2++;

	printf("Size1: %d Size2: %d Result: %d\n", size1, size2, atoi(*(argv + 1)) * atoi(*(argv + 2)));
	return (0);
}

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrNew = NULL, *ptrTemp = NULL;

	unsigned int i = 0, min_size = 0;

	if (new_size == old_size)
		return (ptr);
	else if (new_size >= old_size)
		min_size = old_size;
	else
		min_size = new_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		ptrNew = malloc(new_size);
		return (ptrNew);
	}

	ptrNew = malloc(new_size);
	if (ptrNew == NULL)
		return (NULL);

	ptrTemp = ptr;
	for (i = 0; i < min_size; i++)
		*(ptrNew + i) = *(ptrTemp + i);

	free(ptr);
	return ((void *)ptrNew);
}
