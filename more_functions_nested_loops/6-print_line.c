#include "main.h"
/**
 *
 *
 *
 */

void print_line(int n)
{

	int i;

	for (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar(10);
		}
		else 
		{
			_putchar((i) + 95);
		}
		_putchar(10);
	}


}
