#include "main.h"
/**
* print_rev - dar vuelta horacion
* @s: puntero
*
*/


void print_rev(char *s)
{

	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	b--;
	while (b >= 0)
	{
		_putchar(s[b]);
			b--;
		{
}

}
	_putchar('\n');
}
