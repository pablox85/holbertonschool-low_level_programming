#include "main.h"
/**
 * print_rev - imprime al berre
 *@s: - palabra ya dada
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar(10);
}
