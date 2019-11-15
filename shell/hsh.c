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

/*
               perror("execve");   /* execve() returns only on error
               exit(EXIT_FAILURE);
}

ssize_t getline(char **line_readed, size_t *number_of_bytes, FILE *file_descriptor); //returns -1 on error
*/
