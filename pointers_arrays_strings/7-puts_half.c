#include "main.h"

/**
 * puts_half - sadsaod
 *@str: sadkjsald
 *
 */

void puts_half(char *str)
{

	int i = 0;
	int mitad;
	int lqq;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
	{
		mitad = i / 2;
	}
	else
	{
		mitad = (i - 1) / 2 + 1;
	}

	for (lqq = mitad; mitad < i; lqq++)
		_putchar(str[lqq]);

	_putchar('\n');
}
