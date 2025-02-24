#include "main.h"
/**
 *
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
				_putchar (j / 10 + '0');
			}
				_putchar (j % 10 + '0');
		}
		_putchar('\n');

}
