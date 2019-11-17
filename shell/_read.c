#include "shs.h"

/**
 * _read - Reads STDIN then saves it in a pointer removing NL
 * @command_line: pointer to save string in.
 *
 * Return: void.
 */
void _read(char **command_line)
{
	int i = 0;
	char *command_exit = "exit";
	size_t len_of_command = 0;
	ssize_t len_of_read;

	/**
     * To read command line and exit in case of error.
     */
	len_of_read = getline(&(*command_line), &len_of_command, stdin);
	if (len_of_read == -1)
	{
		printf("\n");
		exit(EXIT_SUCCESS);
	}

    /**
     * To replace end of line character by null character.
     */
	for (i = 0; command_line[i] != '\n'; i++)
		;
	command_line[i] = '\0';

	/**
     * To exit in case exit command is typed.
     */
	if (strcmp(&(*command_line), command_exit) == 0)
		exit(EXIT_SUCCESS);
}
