#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Prints an error message and exits.
 * @code: Exit code.
 * @message: Format string with %s.
 * @value: String to insert.
 */
void error_exit(int code, const char *message, const char *value)
{
	dprintf(STDERR_FILENO, message, value);
	exit(code);
}

/**
 * error_exit_fd - Prints error for file descriptor and exits.
 * @code: Exit code.
 * @message: Format string with %d.
 * @fd: File descriptor value.
 */
void error_exit_fd(int code, const char *message, int fd)
{
	dprintf(STDERR_FILENO, message, fd);
	exit(code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: 0 on success, exits with code on error.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (bytes_read == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_exit_fd(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit_fd(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}