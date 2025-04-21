#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * create_file - crear un archivo
 * @filename: nombre
 * @text_content: contenido
 * Return: solo dios sabe
 */
int create_file(const char *filename, char *text_content)
{
	int len = 0;
	int fd;
	ssize_t w;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_TRUNC | O_WRONLY | O_CREAT, 0600);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);

		if (w == -1 || w != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
