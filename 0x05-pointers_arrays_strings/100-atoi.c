#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to an array.
 *
 * Return: void
 */
int _atoi(char *s)
{
	int sign, number, i, signoimpreso, resultado, max;
	char result[10]="0000000000";

	sign = 1;
	number = 0;
	i = 0;
	signoimpreso = 0;
	resultado = 0;
	max = 1000000000;
	while (*s)
	{
		if (*s == '-' && !number)
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			while (*s >= '0' && *s <= '9')
			{
				if (sign == -1 && !signoimpreso)
				{
					_putchar('-');
					result[i] = '-';
					signoimpreso = 1;
				}
				number = 1;
				result[i] = *s;
				_putchar(result[i]);
				i++;
				s++;
			}
			break;
		}
		s++;

	}

	for (i = 0; i < 10; i++)
	{
		if (result[i] == '-')
			continue;
		resultado += (result[i] - '0') * max;
		max /= 10;
	}
	if (result[0] == '-')
		resultado *= -1;


	return (resultado);
}
