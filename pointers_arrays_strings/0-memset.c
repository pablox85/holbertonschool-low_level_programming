#include "main.h"
/**
 *_memset - seteo de memoria
 *@s: - puntero de char s
 *@b: - valor constante
 *n@: - bytes a llenar
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		if (s[i] == 0)
		{
			s[i] = b;
		}

	}
	return s;
}


