#include "main.h"
/**
 * _isupper - veriffica si es mayuscula
 * Return: 1 si es true, 0 si es false
 * @c: parametro pasado
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
