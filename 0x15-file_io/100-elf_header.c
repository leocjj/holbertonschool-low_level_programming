#include "holberton.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * main - program that copies the content of a file to another file.
 * @ac: number of arguments received.
 * @av: parameters received as an array of strings .
 *
 * Return: 0 on success.
 */

int main(int ac, char **av)
{
	int fd = -1;
	ssize_t letters_printed = 0, letters_readed = 0;
	char *buffer;
	char *filename = *(av + 1);

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	letters_readed = read(fd, buffer, 1024);
	if (letters_readed < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	*(buffer + letters_readed) = '\0';

	letters_printed = write(STDOUT_FILENO, buffer, letters_readed);

	close(fd);
	free(buffer);
	if (letters_printed != letters_readed)
		return (0);

	return (letters_printed);
}
