#include "main.h"
#include <stdlib.h>
/**
 *create_array - crea el array con carcter dado
 *@size: tama�o del array
 *@c: caracter a inicilizar
 *Return: un puntero al array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;

	}
	return (arr);

}
