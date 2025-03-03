#include "main.h"
/**
 *_strncat - concatena 2 string
 *@dest: cadena destino
 *@src: cadena fuenfuente
 *@n: no sabe no contest
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

int i = 0;
int j = 0;


	while (dest[j] != '\0')
	{
	j++;

	}

		while (i < n && src[i] != '\0')
		{
			dest[j] = src[i];
			i++;
			j++;
		}

		dest[j] = '\0';

	return (dest);
}
