#include "main.h"
#include "stdio.h"
/**
 * n - valor asignado
 *
 */

void print_to_98(int n)
{
	int i;

	if (n < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d ",i);
			if(n != 98)
			{
				printf(",");
			}
			
		}
	 }
	else if (n > 98)
	{
		 for (i = n; i >= 98; i--)
		 {
			printf("%d, ",i);
			if (n=98)
			printf("\b ");	
				
		}
	}	 
	else 
	{
		n = 98;
		printf("%d\n",n);
	}
	


}
