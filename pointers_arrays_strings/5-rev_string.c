#include "main.h"
/**
 *rev_string - rev string
 *@s: - parametro dado
 *
 */

void rev_string(char *s)
{

int i = 0;
int j;
int largo = 0;
int temp;

	while (s[i] != '\0')
	{
		largo++;
	}
			j = largo - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	
		i++;
		j--;
	}
	return j;
}

