#include "main.h"
/**
 *more_numbers - mas numeros
 *
 *
 */

void more_numbers(void)
{

	int j;
	
		for ( j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar (j / 10 + 48);
			}
				_putchar (j % 10 + 48);
		}
		_putchar('\n');
}
