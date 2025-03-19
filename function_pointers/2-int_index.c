#include "function_pointers.h"
/**
 *int_index - busca un int en un arrat
 *@array: puntero para buscar en el array
 *@size: numere de elemento en el []
 *@cmp: puntero de funcion de comparacion
 *Return: -1 si es menor a 0 || 0 si es mayor
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);


}
