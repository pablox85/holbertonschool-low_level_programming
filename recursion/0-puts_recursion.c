#include "main.h"

/**
 * _puts_recursion - imprimir con recursion
 * @s: string a recorrer
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
