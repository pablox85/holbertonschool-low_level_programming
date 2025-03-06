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

	while (i < n)
	{
	if (src[i] != '\0')
		{
		dest[i] = src [i];
		}
	else
		{
		dest[i] = '\0';
		}
	i++;
	}


return (dest);
}
