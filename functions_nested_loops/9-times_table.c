#include "main.h"
/**
 * times_table - tabla pitagorica
 *@i- filas
 *@j- columnas
 */
void times_table(void)
{
	int i, j, result;

		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
			result = i * j;

			if (j != 0)
			{
			_putchar(',');
			_putchar(' ');
			}

			if (result < 10)
			_putchar(result + '0');
			else
			{
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
			}
			}
		_putchar('\n');
		}
}

