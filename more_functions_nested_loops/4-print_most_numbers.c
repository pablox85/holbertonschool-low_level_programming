#include "main.h"
/**
 *print_most_numbers - imprime casi todos los numero
 *
 *
 *
 */

void print_most_numbers(void)
{

	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50)
		continue;

		if (i == 52)
		continue;
		_putchar(i);
	}
_putchar(10);
}
