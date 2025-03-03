#include "main.h"
/**
 *_strcpy - copya de caracteres
 *@dest: destino de caracteres
 *@src: source file
 *Return: retorno de copia
 */

char *_strcpy(char *dest, char *src)
{

int i = 0;
int j = 0;

	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}

