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

	while (src[i] != '\0'|| src[i] == n)
	{
		i++;
		dest[i] = src[i];
		
	}


	dest[i] = '\0';

	return (dest);
}
