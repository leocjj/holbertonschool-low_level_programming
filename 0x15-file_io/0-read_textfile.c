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
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read.
 * @letters: amount of character to read from file.
 *
 * Return: number of characters printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = -1;
	size_t letters_printed = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read(fd, buffer, letters);

	letters_printed = write(STDOUT_FILENO, buffer, strlen(buffer));

	close(fd);
	free(buffer);
	if (letters_printed < letters)
		return (0);

	return (letters);
}
