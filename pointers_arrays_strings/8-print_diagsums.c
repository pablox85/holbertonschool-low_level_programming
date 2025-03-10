#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - suma diagonales
 *@a: puntero
 *@size: tamano de la matriz
 */

void print_diagsums(int *a, int size)
{
	int suma1 = 0;
	int suma2 = 0;
	int i = 0;

	for (i = 0; i < size; i++)
	{
		suma1 += a[i * size + i];
		suma2 += a[i * size + (size - 1 - i)];
	}

	printf("%d\n", suma1, suma2);
}

