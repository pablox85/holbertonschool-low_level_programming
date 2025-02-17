#include "main.h"
/**
 * print_sign - sarasa
 * @n: numero
 * Return: 0
 */

int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n <= -1)
	{
		_putchar('+');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
