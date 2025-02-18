#include "main.h"
/**
 *
 *
 *
 *
 */

void jack_bauer(void)
{
int i; /* HORAS */
int j; /* MINUTOS 0 al 5 */
int k; /* MINUTOS 0 al 9 */

	for (i = 48; i <= 57; i++) /*0 al 2*/
		for (j = 48; j <= 53; j++) /*0 al 5*/
			for(k = 48; k <= 57; k++)
	{
	if (i == 48)
	{
		_putchar(i);
		_putchar(i);
		_putchar(58);
		_putchar (j);
		_putchar(k);
	}
	
	if (i > 48)
	{
	_putchar(48);
	_putchar(i);
	_putchar(58);
	_putchar(j);
	_putchar(k);
	}
	_putchar(10);
	}

}
