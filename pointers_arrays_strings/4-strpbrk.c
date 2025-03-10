#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - funcion de busqeuda
 *@s: array
 *@accept: comparacion
 *Return: valores de accept
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		if (*a == *s)
		{
			return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
