#include "shs.h"

int main(void)
{
        char *command_line = NULL;
        char *command_exit = "exit";
        char *args_for_execve[] = { "", NULL}, *new_env_vars[] = { NULL };
	int i = 0, wait_status, file_ok, access_ok;
	size_t len_of_command = 0;
        ssize_t len_of_read;
        pid_t child_pid;

        while (1)
        {
                printf("#MiniShell$ ");
                len_of_read = getline(&command_line, &len_of_command, stdin);
		for(i = 0; command_line[i] != '\n'; i++)
			;
		command_line[i] = '\0';
		if(strcmp(command_line, command_exit) == 0)
			exit(EXIT_SUCCESS);
		file_ok = access(command_line, F_OK);
		access_ok = access(command_line, X_OK);
		if(file_ok >=0 && access_ok >=0)
		{
			child_pid = fork();
			if (child_pid == -1)
				return (1);
			if (child_pid == 0)
			{
				execve(command_line, args_for_execve, new_env_vars);
				free(command_line);
			}
			else
				wait(&wait_status);
		}
		else
			printf("./shell: No such file or directory\n");
	}
        return (0);
}

/********************* 	PENDIENTES *********************************

Task Simple shell 0.1 mandatory
Write a UNIX command line interpreter.
	*) Handle errors.
	*) You have to handle the “end of file” condition (Ctrl+D)

Task Simple shell 0.2 mandatory		Simple shell 0.1 +
	*) Handle command lines with arguments (creo que es usando strtok y pasando los argumentos a execve)

Task Simple shell 0.3 mandatory		Simple shell 0.2 +
	*) Handle the PATH

Task Simple shell 0.4 mandatory		Simple shell 0.3 +
	*) Implement the exit built-in, that exits the shell
	*) Usage: exit
	*) You don’t have to handle any argument to the built-in exit

Task Simple shell 1.0 mandatory		Simple shell 0.4 +
	*) Implement the env built-in, that prints the current environment

Task Betty would be proud mandatory
	*) Write a beautiful code that passes the Betty checks

Task README, man, AUTHORS mandatory
	*) Write a README
	*) Write a man for your shell.
	*) You should have an AUTHORS file at the root of your repository, listing all individuals having contributed content to the repository. Format, see Docker


Información importante de los comandos resumida en este archivo:
https://github.com/leocjj/0123/blob/master/0123C_files.txt


               perror("execve");   /* execve() returns only on error
               exit(EXIT_FAILURE);

*/
