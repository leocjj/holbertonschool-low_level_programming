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
 * create_file - function that creates a file.
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: number of characters printed.
 */

int create_file(const char *filename, char *text_content)
{
	int fd = -1, text_size = 0, i = 0;
	ssize_t letters_printed = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + i) != '\0')
		{
			text_size++;
			i++;
		}
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_size == 0)
	{
		close(fd);
		return (1);
	}
	letters_printed = write(fd, text_content, text_size);

	close(fd);

	if (letters_printed != text_size)
		return (-1);

	return (1);
}
