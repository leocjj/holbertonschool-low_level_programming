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
 * open_fds - open file descriptors.
 * @fd_from: pointer to file descriptor for file opened.
 * @file_from: pointer to file name.
 * @fd_to: pointer to file descriptor for the other file.
 * @file_to: pointer to file name.
 *
 * Return: void.
 */
void open_fds(int *fd_from, char *file_from, int *fd_to, char *file_to)
{
	*fd_from = open(file_from, O_RDONLY);
	if (*fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	*fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (*fd_to == -1)
	{
		close(*fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
}
/**
 * close_fds - close file descriptors.
 * @fd_from: file descriptor for file opened.
 * @fd_to: file descriptor for the other file.
 *
 * Return: void.
 */
void close_fds(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
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
	int fd_from = -1, fd_to = -1, i = 0;
	ssize_t letters_readed = 0, letters_printed = 0;
	char *file_from = *(av + 1), *file_to = *(av + 2);
	char buffer[1024];

	while (i++ < 1024)
		buffer[i] = '\0';

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	open_fds(&fd_from, file_from, &fd_to, file_to);

	letters_readed = read(fd_from, buffer, 1024);
	while (letters_readed > 0)
	{
		letters_printed = write(fd_to, buffer, letters_readed);
		if (letters_printed != letters_readed)
		{
			close_fds(fd_from, fd_to);
			dprintf(STDERR_FILENO, "Can't write to %s\n", file_to);
			exit(99);
		}
		letters_readed = read(fd_from, buffer, 1024);
	}
	if (letters_readed < 0)
	{
		close_fds(fd_from, fd_to);
		dprintf(STDERR_FILENO, "Can't read from file %s\n", file_from);
		exit(98);
	}

	close_fds(fd_from, fd_to);
	return (0);
}
