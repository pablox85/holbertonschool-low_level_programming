#include "main.h"
/**
 * _isdigit - verifica si es digito
 * @c: caracter proporcionado
 * Return: 1 true 0 false
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
