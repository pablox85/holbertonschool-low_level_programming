#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
/**
* main - entry point
* @argc: argumentos
* @argv: cantidad
* Return: sasras
*/

int main(int argc, char *argv[])
{    
char buffer[1024];
ssize_t bytes_read, bytes_written;
int fd_from, fd_to;
char *file_from = argv[1], *file_to = argv[2];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open(file_from, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

fd_to = open( argv[2], O_CREAT | O_WRONLY | O_TRUNC,0664 );
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}

bytes_read = read(fd_from, buffer, 1024);
if(bytes_read == -1)
{
    dprintf(STDERR_FILENO, "Error Can't read from file %s\n", file_from);
    close(fd_from);
    close(fd_to);
    exit(98);
}
while (bytes_read > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
close(fd_from);
close(fd_to);
exit(99);
}

bytes_read = read(fd_from, buffer, 1024);
if(bytes_read == -1)
{
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
    close(fd_from);
    close(fd_to);
    exit(98);
}
}
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
return (0);
}