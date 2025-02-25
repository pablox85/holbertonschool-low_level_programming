#include "main.h"
/**
 *
 * 92 = \
 */

void print_diagonal(int n)
{

	int i;

	for (i = 2; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(32);
		}
		else
		{
			_putchar(10);
		}
	}
	_putchar(92);
	_putchar(10);
}
