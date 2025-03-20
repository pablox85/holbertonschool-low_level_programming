#ifndef CALC_H
#define CALC_H
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - suma todos los parametros
 *@n: numero de argumentos a la funcion
 *Return: suma de todos los parametros
 */

int sum_them_all(const unsigned int n, ...)
{

	unsigned int i = 0;
	int argSum = 0;
	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	while (i < n)
	{
		argSum += va_arg(args, int);
		i++;
	}
	return (argSum);
}
#endif
