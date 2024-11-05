#include "main.h"
/**
 * _strlen - largo de palabras
 *@s: puntero
 * Return: largo de la cadena
 */

int _strlen(char *s)
{
 
	int largo;

	for (largo = 0; *s != '\0'; s++)
	{
		largo++;
	}
	return(largo);
}
