#include "shs.h"

/**
 * _read - Reads STDIN then saves it in a pointer removing NL
 *
 * @command_line: pointer to save string in
 *
 */
void _read(char **command_line)
{
	size_t len_of_command = 0;
	ssize_t len_of_read;

	len_of_read = getline(&(*command_line), &len_of_command, stdin);
	if (len_of_read == -1)
	{
		printf("\n");
		exit(EXIT_SUCCESS);
	}
}
