#include "shs.h"

/**
 * _ntty - non-interactive. Receives input, calls the program then exits
 *
 */
void _ntty(char *argv)
{
	char *command_line = NULL;
	int i = 0, file_ok;
	char *args_for_execve[] = { "", NULL}, *new_env_vars[] = { NULL };

	_read(&command_line);
	for (i = 0; command_line[i] != '\n'; i++)
		;
	command_line[i] = '\0';
	file_ok = access(command_line, F_OK | X_OK);
	if (file_ok >= 0)
	{
		execve(command_line, args_for_execve,
		       new_env_vars);
		free(command_line);
	} else
		printf("%s: No such file or directory\n", argv);
}
