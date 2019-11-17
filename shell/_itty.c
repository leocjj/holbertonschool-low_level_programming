#include "shs.h"

/**
 * _itty - Interactive mode of program, waits for input then calls program
 * if it is found.
 */
void _itty(char *argv)
{
	char *command_line = NULL;
	char *command_exit = "exit";
	char *args_for_execve[] = { "", NULL}, *new_env_vars[] = { NULL };
	int i = 0, file_ok, wait_status;
	pid_t child_pid;

	while (1)
	{
		printf("#MiniShell$ ");
		_read(&command_line);
		for (i = 0; command_line[i] != '\n'; i++)
			;
		command_line[i] = '\0';
		if (strcmp(command_line, command_exit) == 0)
			exit(EXIT_SUCCESS);
		file_ok = access(command_line, F_OK | X_OK);
		if (file_ok >= 0)
		{
			child_pid = fork();
			if (child_pid == -1)
				exit(1);
			if (child_pid == 0)
			{
				execve(command_line, args_for_execve,
				       new_env_vars);
				free(command_line);
			} else
				wait(&wait_status);
		} else
			printf("%s: No such file or directory\n", argv);
	}
}
