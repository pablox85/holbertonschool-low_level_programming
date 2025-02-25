#include "main.h"
/**
 *
 * 47 = /
 */

void print_diagonal(int n)
{

	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(47);
			
		}
		else
		{
			_putchar(10);
		}

	}
	_putchar(10);
}
