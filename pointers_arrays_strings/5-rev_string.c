#include "main.h"
/**
 *rev_string - rev string
 *@s: - parametro dado
 *
 */

void rev_string(char *s)
{

int i = 0;
int j = 500;
int temp;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
return 0;
}

