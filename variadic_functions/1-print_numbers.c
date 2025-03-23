#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Imprime nums separados por un separador.
 * @separator: Separador entre los números.
 * @n: Cantidad de números.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
	int num = va_arg(args, int);

	printf("%d", num);

	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}

	}

	printf("\n");
	va_end(args);
}

