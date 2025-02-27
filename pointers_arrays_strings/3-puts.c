#include "main.h"
#include <stdio.h>
/**
 *_puts - no se que hace
 *@str: - puntero
 *
 */
void _puts(char *str)
{

	int i = 0;

	for (i = 0; i <= *str; i++)
	{
		i++;
		str++;
	}
	printf("%s\n", str);
}
