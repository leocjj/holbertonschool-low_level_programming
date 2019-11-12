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
	size_t letters_readed = 0, letters_printed = 0;
	char *buffer;

	if (!filename)
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

	letters_readed = read(fd, buffer, letters);
	if (letters_readed < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	*(buffer + letters_readed) = '\0'

	letters_printed = write(STDOUT_FILENO, buffer, letters_readed);

	close(fd);
	free(buffer);
	if (letters_printed != letters_readed)
		return (0);

	return (letters_printed);
}
