#include "main.h"
/**
 *
 *
 *
 *
 */

void jack_bauer(void)
{
int i;

	for (i = 48; i <= 50; i++)
	{
	if (i == 48)
	{
		_putchar(i);
		_putchar(i);
		_putchar(32);

	}
	else if (i > 0)
	{
	_putchar(48);
	_putchar(i);
	_putchar(58);
	_putchar(65);
	}
	_putchar(10);

	}
}
