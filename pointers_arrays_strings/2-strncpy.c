#include "main.h"
/**
 *_strncpy - una locura
 *@dest: destino
 *@src: source
 *@n: n es n
 * @n: n es n
 *Return: 0
 */

char *_strncpy(char *dest, char *src, int n)

{

int i = 0;

while (i < n && src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
return (dest);
}

