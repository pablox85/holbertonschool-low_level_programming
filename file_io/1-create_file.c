#include "main.h"
#include <stdlib.h>
#include <fnctl.h>
#include <unistd.h>
/**
 * create_file - crear un archivo
 * @filename: nombre
 * @text_content: contenido
 * Return: solo dios sabe 
 */
int create_file(const char *filename, char *text_content)
{
	int fd, largo;
	char *buffer, count;
	
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		return (-1);
	}
	else if (text_content != NULL)
	{
		
		if (buffer == NULL)
		{
			close(fd);
			return (0);
		}
		while(text_content[largo] != '\0')
		{
			largo++;
		}






}
