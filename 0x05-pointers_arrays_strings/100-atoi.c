#include "holberton.h"
#include <limits.h>

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to an array.
 *
 * Return: void
 */
int _atoi(char *s)
{
	int sign, number, i, signoimpreso;
	unsigned int resultado;

	sign = 1;
	number = 0;
	i = 0;
	signoimpreso = 0;
	resultado = 0;
	while (*s)
	{
		if (*s == '-' && !number)
			sign *= -1;
		if (*s >= '0' && *s <= '9')
		{
			while (*s >= '0' && *s <= '9')
			{
				if (sign == -1 && !signoimpreso)
					signoimpreso = 1;
				number = 1;
				resultado = resultado * 10 + *s - '0';
				i++;
				s++;
			}
			break;
		}
		s++;

	}

	if ((resultado >= (unsigned int) INT_MAX && sign == 1))
		return (INT_MAX);
	else if ((resultado > (unsigned int) INT_MAX && sign == -1))
		return (INT_MIN);
	else if (sign == -1)
		return ((int) -resultado);
	else
		return ((int) resultado);




	return (resultado);
}
