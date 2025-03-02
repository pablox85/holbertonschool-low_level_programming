#include "main.h"
/**
 * puts2: - asrasa
 *
 * imprimir caracter de 2 en 2
 * 012345678
 * 02468...
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] >= 0 && str[i *2] != '\0')
	{
		i++;
		_putchar(str[(i -1) *2]);
	}
_putchar(10);



}
