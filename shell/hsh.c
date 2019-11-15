#include "shs.h"

int main(void)
{
        char *comman_line = NULL;
        char *args_for_execve[] = { "", NULL}, *new_env_vars[] = { NULL };
	int i = 0, wait_status;
	size_t len_of_command = 0;
        ssize_t len_of_read;
        pid_t child_pid;

        while (1)
        {
                printf("$ ");
                len_of_read = getline(&comman_line, &len_of_command, stdin);
		while (comman_line[i] != '\n')
			i++;
		comman_line[i] = '\0';
		child_pid = fork();
		if (child_pid == -1)
			return (1);
		if (child_pid == 0)
			execve(comman_line, args_for_execve, newenviron);
		else
			wait(&status);
		free(comman_line);
	}
        return (0);
}

/*
               perror("execve");   /* execve() returns only on error
               exit(EXIT_FAILURE);
}

ssize_t getline(char **line_readed, size_t *number_of_bytes, FILE *file_descriptor); //returns -1 on error
*/
