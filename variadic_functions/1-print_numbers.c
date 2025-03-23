#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - imprime numeros
 *@separator: separador
 *@n: numeros dados
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return;

	if (n == 0)
		return;

	while (i < n)
	{

	unsigned int cArgs = va_arg(args, unsigned int);

		if (i > 0)
		{
		 printf("%s", separator);
		}

	printf("%d", cArgs);
	i++;


	}
	printf("\n");
	va_end(args);


}
