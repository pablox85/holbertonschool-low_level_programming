#include "main.h"
/**
 *_strncpy - copia de caracateres
 *@dest: - char destino
 *@src: - source de char
 *@n: - limite de chars
 *Return: valor destio
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (src[i] != '\0')
	{
		if (i < n)
		dest[i] = src[i -1];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
