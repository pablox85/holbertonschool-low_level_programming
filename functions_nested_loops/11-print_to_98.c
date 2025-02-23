#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - cuenta hasta98
 * @n: numero
 */

void print_to_98(int n)
{
	int i;

	if ((n >= 0 && n < 98) || n < 98)
	{
		for (i = n; i <= 97; i++)
		{
			printf("%d, ", i);
			if (i == 97)
			{
			printf("98\n");
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 99; i--)
		{
			printf("%d, ", i);
			if (i == 99)
			{
			printf("98\n");
			}
		}
	}
	else
	{
		n = 98;
		printf("%d\n", n);
	}



}
