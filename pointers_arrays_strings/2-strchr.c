#include "main.h"
#include <stddef.h>
/**
 * _strchr - nose
 * @s: - string
 * @c: - char
 * Return: 0
 */

char *_strchr(char *s, char c)
{

	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;

			if (c == '\0')
		{
return (&s[i]);
		}

	return (NULL);
}
