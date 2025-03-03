#include "main.h"
/**
 *_strcat - concatena 2 string
 *@dest: cadena destino
 *@src: cadena destio
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{

int i = 0;
int j = 0;


	while (dest[j] != '\0')
	{
	j++;

	}
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}

	dest[j] = '\0';

	return (dest);




}
