#include "main.h"

/**
 * print_numbers - Imprime los números del 0 al 9, omitiendo el 2 y el 4,
 * seguido de una nueva línea.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar (i + '0');
	}
	_putchar ('\n');
}
