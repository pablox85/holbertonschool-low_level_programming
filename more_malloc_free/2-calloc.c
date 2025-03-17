#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
#include <string.h>
/**
 *_calloc - copia de calloc
 *@nmemb: elementos a asignar
 *@size: tamaño de elementos
 *Return: memoria pedida
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t calcMemoria = nmemb * size;
	size_t i;
	void *memPedida = malloc(calcMemoria);
	unsigned char *ptr = (unsigned char *)memPedida;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);


	if (nmemb > (SIZE_MAX / size))
		return (NULL);


	if (memPedida == NULL)
		return (NULL);

	for(i = 0; i < calcMemoria; i++)
	{
		ptr[i] = 0;
	}
		
	return (memPedida);


}
