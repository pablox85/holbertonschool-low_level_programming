#include "main.h"
/**
 *_memcpy - copya a memoria
 *@dest: - a donde copiar
 *@src: - desde donde copiar
 *@n: - caracteres datos
 *Return: retorna dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);

}

