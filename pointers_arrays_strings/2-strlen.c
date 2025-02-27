#include "main.h"
#include <stdio.h>
/**
 *_strlen - calcula los caractecres
 *@s: - contador
 *Return: devuelve el valor de la cadena
 */

int _strlen(char *s)

{

	int i = 0;

		while (s[i] != '\0')
		{

		i++;

		}

	return (i);
}
