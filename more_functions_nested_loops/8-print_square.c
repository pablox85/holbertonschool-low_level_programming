#include "main.h"
/**
 *print_square - imprime un cuadrado
 *@j; segundo loop
 *@size: - tamano
  */

void print_square(int size)
{

	int i, j;

	if (size <= 0)
		_putchar(10);

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			_putchar(35);
		}
			_putchar(10);
	}
}
