#include <stdlib.h>
#include <limits.h>
#include <stdint.h>
/**
 * _calloc - una implementación de calloc.
 * @nmemb: número de elementos a asignar.
 * @size: tamaño de cada elemento.
 * Return: puntero a la memoria asignada o NULL si falla.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    size_t calcMemoria;
    void *memPedida;
    unsigned char *ptr;
    size_t i;

    if (nmemb == 0 || size == 0)
        return (NULL);
    if (nmemb > (SIZE_MAX / size))
        return (NULL);

    calcMemoria = nmemb * size;

    memPedida = malloc(calcMemoria);

    if (memPedida == NULL)
        return (NULL);

    ptr = (unsigned char *)memPedida;
    for (i = 0; i < calcMemoria; i++)
    {
        ptr[i] = 0;  
    }

    return (memPedida);
}

