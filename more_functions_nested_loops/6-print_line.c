#include "main.h"
/**
 *print_line - imprime lineas
 *@n: parametro definido en el main
 *
 */

void print_line(int n)
{

	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar(10);
		}

	}

	_putchar(10);
}
