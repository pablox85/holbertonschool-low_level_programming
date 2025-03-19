#include "function_pointers.h"
#include <stdlib.h>
/**
 *print_name - imprime un arreglo dado por punteros
 *@name: nombre, string a pasar
 *@f: determina como se imprime name
 */

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
		return;

	f(name);

}//
