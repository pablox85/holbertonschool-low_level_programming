#include <stdlib.h>
/**
 * array_range - recorre el array en un range 
 *@min: valor minimo
 *@max: valor maximo
 *Return: el valor dado
 */

int *array_range(int min, int max)
{
	size_t i = 0;
	size_t arreglo = (max - min) + 1;
	int *arr = (int *)malloc(arreglo *  sizeof(int));
	
	if (min > max)
		return(NULL);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arreglo; i++)
	{
		arr[i] = min + i;
	}

	return (arr);



}
