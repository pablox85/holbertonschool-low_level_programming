#include "main.h"

/**
 *
 *
 *
 */

void puts_half(char *str)
{

	int i;
	int guardacion[10];
	
	for (; str[i] != '\0'; i++)
	{
		guardacion[i] = i;
	_putchar( guardacion[i] + '0' );
	}


	_putchar('\n');	
 }
