#include "main.h"
#include <stdio.h>

/**
* puts2 - sarasea
*@str: puntero
*
*
*/

void puts2(char *str)

{
	int i = 0;

	for (; str[i] != '\0'; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
