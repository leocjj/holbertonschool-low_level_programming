#include "shs.h"

/**
 * _ntty - non-interactive. Receives input, calls the program then exits
 *
 */
void _ntty(char *argv)
{
	char *command_line = NULL;
	char *args_for_execve[] = { "", NULL}, *new_env_vars[] = { NULL };
	int i = 0, file_found = -1, file_access = -1;
	struct stat st;

	_read(&command_line);
	for (i = 0; command_line[i] != '\n'; i++)
		;
	command_line[i] = '\0';

	file_found = stat(command_line, &st);
	file_access = access(command_line, F_OK | X_OK);

	if (file_found >= 0)
	{
		if (file_access >= 0)
		{
			execve(command_line, args_for_execve, new_env_vars);
			free(command_line);
		}
		else
			printf("-%s: %s: Permission denied\n", argv, command_line);
	}
	else
		printf("-%s: %s: No such file or directory\n", argv, command_line);

}
