#include "main.h"

/**
 * print_diagonal - sadasd
 * @s: number of slashes
 *
 * Return: slashes
 */

void print_diagonal(int s)
{
	int a, b;

	if (s > 0)
	{
		for (a = 0; a < s; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
