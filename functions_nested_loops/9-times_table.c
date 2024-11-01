#include "main.h"

/**
 * times_table - tabla del 9
 * Return:0
 */

void times_table(void)
{
	int num1;
	int num2;
	int num3;

	for (num1 = 0; num1 <= 9; num1++)

	for (num2 = 0; num2 <= 9; num2++)
	{
		num3 = num1 * num2;
		if (num2 > 0)
		{
			_putchar(',');
			_putchar(' ');
		}

		if (num2 >= 10)
		{
			_putchar((num3 / 10) + '0');
		}
			_putchar((num3 % 10) + '0');
		}
	_putchar('\n');
	}
