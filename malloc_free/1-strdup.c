#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *_strdup - duplicadion de caractares
 *@str: string dada
 *
 *Return: valor de copy
 */

char *_strdup(char *str)
{
	char *copy;
	size_t largo = 0;
	size_t strToStr = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[largo] != '\0')
	{
		largo++;
	}

	copy = malloc(largo + 1);

	if (copy == NULL)
	{
		return (NULL);
	}

	while (strToStr <= largo)
	{
		copy[strToStr] = str[strToStr];
		strToStr++;
	}

return (copy);

}
