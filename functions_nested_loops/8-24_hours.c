#include "main.h"
/**
 * jack_bauer - contador de horas
 *
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
		for (j = '0'; j <= '3'; j++)
			for (k = '0'; k <= '5'; k++)
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
