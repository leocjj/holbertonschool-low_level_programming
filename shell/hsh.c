#include <stdio.h>

int main(void)
{
        char *cmd = NULL;
        char *test[] = { "", NULL};
        char *newenviron[] = { NULL };
	int i = 0;
        size_t n;
        ssize_t read;
        while (1)
        {
                printf("$ ");
                read = getline(&cmd, &n, stdin);
		while (cmd[i] != '\n')
			i++;
		cmd[i] = '\0';
		fork();
                execve(cmd, test, newenviron);
                printf("%d\n", (int)read);
		cmd = NULL;
	}
        return (0);
}
/*
int main2(int argc, char *argv[])
{
	char *newargv[] = { NULL, "hello", "world", NULL };
        const char *newenviron[] = { NULL };

               if (argc != 2) {
                   fprintf(stderr, "Usage: %s <file-to-exec>\n", argv[0]);
                   exit(EXIT_FAILURE);
               }

               newargv[0] = argv[1];

               execve(argv[1], newargv, newenviron);
               perror("execve");   /* execve() returns only on error 
               exit(EXIT_FAILURE);
}

ssize_t getline(char **lineptr, size_t *n, FILE *stream);
*/
