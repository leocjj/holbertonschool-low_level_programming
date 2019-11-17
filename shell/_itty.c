#include "shs.h"

/**
 * _itty - Interactive, waits for input then calls program if it is found.
 * @argv: parameters received from main(), name of the application.
 *
 * Return: void.
 */
void _itty(char *argv)
{
	char *command_line = NULL;
	char *args_for_execve[] = { "", NULL}, *new_env_vars[] = { NULL };
	int file_found = -1, file_access = -1, wait_status;
	struct stat st;
	pid_t child_pid;

	while (1)
	{
		printf("#MiniShell$ ");
		_read(&command_line);

		/**
		 * Conditions to evaluate: command is found, command is executable by user.
		 */
		file_found = stat(command_line, &st);
		file_access = access(command_line, F_OK | X_OK);
		if (file_found >= 0)
		{
			if (file_access >= 0)
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
				printf("-%s: %s: Permission denied\n", argv, command_line);
		}
		else
			printf("-%s: %s: No such file or directory\n", argv, command_line);
	}
}
