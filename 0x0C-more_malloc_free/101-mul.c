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
	int *a = NULL, *b = NULL, *ans = NULL;
	int size1 = 0, size2 = 0, i = 0, j = 0, tmp = 0;

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

	a = malloc(size1 * sizeof(int));
	if (a == NULL)
	{
		printf("Error\n");
		exit (98);
	}
	b = malloc(size2 * sizeof(int));
	if (b == NULL)
	{
		printf("Error\n");
		exit (98);
	}
	ans = malloc((size1 + size2 + 2) * sizeof(char));
	if (ans == NULL)
	{
		printf("Error\n");
		exit (98);
	}
	for (i = 0; i < size1 + size2 + 2; i ++)
		ans[i] = 0;

	for (i = size1 - 1, j = 0; i >= 0; i--, j++)
	{
		a[j] = num1[i]-'0';
	}
	for (i = size2 - 1, j = 0; i >= 0; i--, j++)
	{
		b[j] = num2[i]-'0';
	}
	for (i = 0; i < size2; i++)
	{
		for(j = 0; j < size1; j++)
		{
			ans[i + j] += b[i] * a[j];
		}
	}
	for(i = 0; i < size1 + size2; i++)
	{
		tmp = ans[i] / 10;
		ans[i] = ans[i] % 10;
		ans[i+1] = ans[i+1] + tmp;
	}
	for(i = size1 + size2; i >= 0; i--)
	{
		if(ans[i] > 0)
			break;
	}

	for(; i >= 0; i--)
	{
		printf("%d", ans[i]);
	}

	free (ans);
	return (0);
}
