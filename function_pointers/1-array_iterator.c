#include "function_pointers.h"
/**
 *
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	if (array == 0 || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}


}
