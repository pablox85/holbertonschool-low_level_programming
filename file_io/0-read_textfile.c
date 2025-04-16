#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - read txt file
 * @filename: nombre del archivo
 * @letters: letras
 * Return: ni idea
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t  charRead, charWrite;

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	charRead = read(fd, buffer, letters);
		if (charRead == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}

	charWrite = write(STDOUT_FILENO, buffer, charRead);
		if (charWrite == -1 || charWrite != charRead)
		{
			free(buffer);
			close(fd);
			return (0);
		}
	free(buffer);
	close(fd);
	return (charWrite);


}
