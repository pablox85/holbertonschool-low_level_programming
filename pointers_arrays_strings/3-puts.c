#include "main.h"
/**
 *_puts: imprime la string
 *@str: puntero de string
 *Return: 0
 */

void _puts(char *str)
{

	char i;
	{
		for (; *str != '\0'; i++)
		{
			i++;
		}
		_puts(str);
	}
}
