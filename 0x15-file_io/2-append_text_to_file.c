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
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: is the name of the file to append text.
 * @text_content: is a NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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
	else
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	letters_printed = write(fd, text_content, text_size);

	close(fd);

	if (letters_printed != text_size)
		return (-1);

	return (1);
}
