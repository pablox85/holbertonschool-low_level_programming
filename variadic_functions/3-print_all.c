#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - imprime todo
 * @format: tipos de variables
 */

void print_all(const char * const format, ...)
{
	int i = 0, flag = 0;
	char *argStr;
	va_list arg;

	va_start(arg, format);

	while (format && format[i])
	{
		if (flag)
			printf(", ");
	switch (format[i])
	{
		case 'c':
			printf("%c", va_arg(arg, int));
			flag = 1;
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			flag = 1;
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			flag = 1;
			break;
		case 's':
			argStr = va_arg(arg, char *);
			if (!argStr)
				argStr = "(nil)";
			printf("%s", argStr);
			flag = 1;
			break;
		default:
			flag = 0;
			break;
	}
	i++;
	}
printf("\n");
va_end(arg);
}
