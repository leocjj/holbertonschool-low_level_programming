#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stddef.h>
#include "holberton.h"

/**
 * close_fds - close file descriptors.
 * @fd_from: file descriptor for file opened.
 * @fd_to: file descriptor for the other file.
 *
 * Return: void.
 */
void close_fds(int fd_from, int fd_to)
{
	if(close(fd_from) == -1)
	{
		close(fd_to);
		dprintf(2, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if(close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file.
 * @ac: number of arguments received.
 * @av: parameters received as an array of strings .
 *
 * Return: 0 on success.
 */

int main(int ac, char **av)
{
	int fd_from = -1, fd_to = -1;
	ssize_t letters_readed = 0, letters_printed = 0;
	char *file_from = *(av + 1), *file_to = *(av + 2);
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (!file_from)
	{
		dprintf(2, "Can't read from file %s\n", file_from);
		exit(98);
	}

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Can't read from file %s\n", file_from);
		exit(98);
	}

	/** Permissions of the created file: rw-rw-r--. If the file already
	 *  exists, do not change the permissions.
	 */
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(2, "Can't write to %s\n", file_to);
		exit(99);
	}

	/** Permissions of the created file: rw-rw-r--. If the file already
	 */
	letters_readed = read(fd_from, buffer, 1024);
	if (letters_readed < 0)
	{
		close_fds(fd_from, fd_to);
		dprintf(2, "Can't read from file %s\n", file_from);
		exit(98);
	}

	letters_printed = write(fd_to, buffer, letters_readed);
	if (letters_printed != letters_readed)
	{
		close_fds(fd_from, fd_to);
		dprintf(2, "Can't write to %s\n", file_to);
		exit(99);
	}

	close_fds(fd_from, fd_to);
	return (0);
}
