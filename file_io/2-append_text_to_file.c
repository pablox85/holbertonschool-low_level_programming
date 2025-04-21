#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - agrega texto al final
 * @filename: nombre del archivo
 * @text_content: texto a agregar
 * Return: muchas cosas
 */

int append_text_to_file(const char *filename, char *text_content)
{
int len = 0;
ssize_t w;
int fd;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (text_content == NULL)
{
close(fd);
return (1);
}

len = strlen(text_content);
w = write(fd, text_content, len);

if (w == -1 || w != len)
{
close(fd);
return (-1);
}
close(fd);
return (1);
}
