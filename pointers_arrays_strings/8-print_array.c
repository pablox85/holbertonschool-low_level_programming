#include "main.h"
#include <stdio.h>
/**
 *print_array - imprimir el array seguido de ", " menos el ultimo
 *@a: elementos de array
 *@n: arreglo a recorrer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
		printf(", \n");

	}
	}
	printf("\n");
}

