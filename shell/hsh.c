#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
        char *cmd = "start";
        char *test[] = { "/bin/ls", NULL};
        char *newenviron[] = { NULL };
        size_t n;
        ssize_t read;
        while (strcmp("exit", cmd) != 0)
        {
                printf("$ ");
                read = getline(&cmd, &n, stdin);
                execve(cmd, test, newenviron);
                printf("%d\n", (int)read);
        }
        return (0);
}

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
               perror("execve");   /* execve() returns only on error */
               exit(EXIT_FAILURE);
}

//ssize_t getline(char **lineptr, size_t *n, FILE *stream);
