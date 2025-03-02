#include "main.h"
/**
 *puts_half - imprime la mitad
 *@str: caractar dado
 *
 */

void puts_half(char *str)
{
	int i = 0;
	int largo = 0;
	int mitad = 0;

	while (str[i] != '\0')
	{
		i++;
		largo++;
	}
	if ((largo % 2) == 0)
	{
		mitad = largo / 2;
	}
	else
	{
		mitad = (mitad + 1) / 2;
	}

	for (i = mitad; str[i]; i++)
	{
		_putchar(str[i]);
	}

_putchar(10);
}
