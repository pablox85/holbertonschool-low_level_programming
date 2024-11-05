#include "main.h"
#include <stdio.h>
/**
* rev_string - rev string
* @s: puntero
*
*/

void rev_string(char *s)
{

	int a = 0;
	{
		while (s[a] != '\0')
		{
			a++;
		}

		a--;
		
		while (a >= 0)
		{
			printf("%d",(s[a]));
			a--;
		}

	}
	printf("\n");
}
