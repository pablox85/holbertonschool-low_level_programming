#include "main.h"
/**
 *_puts - imprime la string
 *@str: puntero de string
 *
 */

void _puts(char *str)
{

	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
