#include "main.h"
#include <stdio.h>

/**
*print_array - funcion
*@n: tama�o de array
*@a: mo se pa estas
*/
void print_array(int *a, int n)
{

int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

}
