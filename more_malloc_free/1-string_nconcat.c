#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - Otra forma de concatenar
 *@s1: primera cadena
 *@s2: segunda cadena
 *@n: caractere para copiar
 *Return: concatenacion
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t ss1 = 0, ss2 = 0, i = 0, total, copia;
	char *strN;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s2[ss2] != '\0')
		ss2++;


	while (s1[ss1] != '\0')
		ss1++;

	if (ss2 <= n)
	{
		copia = ss2;
	}
	else
	{
		copia = n;
	}

	total = ss1 + copia + 1;
	strN = malloc(total);

	if (strN == NULL)
		return (NULL);

	for (i = 0; i < ss1; i++)
		strN[i] = s1[i];

	for (i = 0; i < ss2; i++)
		strN[ss1 + i] = s2[i];

strN[ss1 + copia] = '\0';

return (strN);
}

