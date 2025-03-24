#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - imprime todo
 * @char: caracteres
 * @format: tipos de variables
 */

void print_all(const char * const format, ...)
{

	char *argCharKeep;
	int *argIntKeep;
	int i = 0;

	va_list arg;
	va_start(arg, format);

	while (format[i] != '\0')
	{
	if (format[i] == 'c' || format[i] == 'i')
			argIntKeep = va_arg(arg, int);

	if(format[i] == 'f' || format[i] == 'd')
			argCharKeep = va_arg(arg, double);
		






















}
