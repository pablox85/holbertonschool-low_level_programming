#include "main.h"
/**
* print_rev - dar vuelta horacion
* @s: puntero
*
*/


void print_rev(char *s)
{

	int b;

	while (s[b] != '\0')
	{
		_putchar(s[b]);
		b--;
	}

	_putchar('\n');
}
