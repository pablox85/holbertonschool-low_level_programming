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
int j; /* HORAS 0 al 3 */
int k; /* MINUTOS 0 al 5 */
int l; /* MINUTOS 0 AL 9 */

	for (i = '0'; i <= '2'; i++) /*0 al 2*/
		for (j = '0'; j <= '3'; j++) /*0 al 3*/
			for(k = '0'; k <= '5'; k++)
				for (l = '0'; l <= '9'; l++)
	{
		_putchar(i);
		_putchar(j);
		_putchar(58);
		_putchar (k);
		_putchar(l);
		_putchar(10);
	}
}


