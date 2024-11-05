#include "main.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0; s[i] != '\0'; i++);

	i--; 

	for (j = 0; j < i; j++, i--)
	{
	temp = s[j];
	s[j] = s[i];
	s[i] = temp;
	}
}
