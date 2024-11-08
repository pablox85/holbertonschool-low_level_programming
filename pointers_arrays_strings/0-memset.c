#include "main.h"
/**
 *_memset - funcion
 *@s: char
 *@b: char
 *@n: int
 *Return: 0
 */


char *_memset(char *s, char b, unsigned int n)

{
	char *p = s;

	while (n--)
	{
	*p++ = b;
	}
	return (s);
}
