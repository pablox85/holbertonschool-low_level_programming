#include "main.h"
/**
 * jack_bauer - contador de horas
 *
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = '0'; i <= '2'; i++)
	{
		for (j = '0'; j <= 9; j++)
		{
			if (i == '2' && j > '3')
				break;
			for (k = '0'; k <= '5'; k++)
			{
				for (l = '0'; <= '9'; l++)
				{
				_putchar(i);
				_putchar(j);
				_putchar(58);
				_putchar(k);
				_putchar(l);
				_putchar(10);

			if (i == '2' && j == '3' && k == '5' && l == '9')
				return;
				}
			}
		}
	}
}

