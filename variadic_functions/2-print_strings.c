#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - imprime cadena de texto
 * @separator: separador
 * @n: catidad
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	unsigned int i; //iteracion sobre argumentos
	char *argKeeper; //almacena temporalmente cada arg pasado a la fun

	va_list arg; //recorre argumentos pasados a la funcion

	va_start(arg, n); //inicia los argumentos desde n en adelante

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
		{
			printf("%s", separator);
		}
		argKeeper = va_arg(arg, char*);

		if (argKeeper == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", argKeeper);
		}

}
printf("\n");
va_end(arg);
}
