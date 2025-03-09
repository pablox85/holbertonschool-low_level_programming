#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - funcion
 *@s: array
 *@accept: comparacion
 *return: algo
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (*s == *accept)
		{
			return (s);
		}
		s++;
	}
	return (NULL);

}
