#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int i = 0;
	int cArgs = 0;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
		return (NULL);

	while (i < n)
	{
		cArgs += (n);
			i++;

	}

	printf("%s, %d \n", separator, n);


}//fin
