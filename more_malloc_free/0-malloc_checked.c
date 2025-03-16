#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - chequea espacio en memoria
 *@b: memoria a reservar
 *Return: retorna lugar de memoria
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);

if (ptr == NULL)
	exit(98);

return (ptr);
}
