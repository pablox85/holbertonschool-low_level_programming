#include "main.h"

/**
 *
 *
 *
 */

void puts_half(char *str)
{

	int i = *str / 2;

	for (; str[i] != '\0'; i++)
	{
		_putchar(i+ '0');

	}
	_putchar('\n');	
 

}
