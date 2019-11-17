#include "shs.h"

/**
 * main - detects if the call is interactive or not,
 * then calls a function accordingly
 *
 * Return: 0 alwyas.
 */
int main(int argc, char **argv)
{
	if (argc == 1)
	{
		if (isatty(fileno(stdin)))
			_itty(*argv);
		else
			_ntty(*argv);
	} else
	{
		printf("Too many arguments");
		return(20);
	}
	return (0);
}
