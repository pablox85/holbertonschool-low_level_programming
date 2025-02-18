#include "main.h"
#include <stdlib.h>
/**
 *print_last_digit - sasas
 *Return: 0
 *@r: - asas
 *
 */

int print_last_digit(int r)
{
	int x;
	x = r % 10;

	if ( x < 0)
	{
		x = -x;
	}
	_putchar (x + '0');
	return (x);
}
