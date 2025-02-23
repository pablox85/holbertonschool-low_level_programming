#include "main.h"
#include "stdio.h"
/**
 * n - valor asignado
 *
 */

void print_to_98(int n)
{
	int i;
	printf("elige un numero ");
	scanf("%d", &n);

	if (n > 0 && n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d\n", i);
		}
	 } 
	else if ( n > 98)
	{
		 for (i = n; i >= 98; i--)
		 {
			printf("%d\n ", i);
		}	
	} 
}
