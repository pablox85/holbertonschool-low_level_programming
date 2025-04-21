#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

/**
 * check_arguments - Validates the number of arguments.
 * @argc: Number of command-line arguments.
 */
void check_arguments(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_read - Checks if file descriptor for reading is valid.
 * @fd: File descriptor.
 * @filename: Name of the file.
 */
void check_read(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * check_write - Checks if file descriptor for writing is valid.
 * @fd: File descriptor.
 * @filename: Name of the file.
 */
void check_write(int fd, char *filename)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * check_close - Checks if a file descriptor closed properly.
 * @fd: File descriptor to close.
 */
void check_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: Number of command-line arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, exits with codes 97-100 on error.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	check_arguments(argc);

	fd_from = open(argv[1], O_RDONLY);
	check_read(fd_from, argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	check_write(fd_to, argv[2]);

	bytes_read = read(fd_from, buffer, 1024);
	while (bytes_read > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			check_close(fd_from);
			check_close(fd_to);
			exit(99);
		}
		bytes_read = read(fd_from, buffer, 1024);
		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			check_close(fd_from);
			check_close(fd_to);
			exit(98);
		}
	}

	check_close(fd_from);
	check_close(fd_to);
	return (0);
}
