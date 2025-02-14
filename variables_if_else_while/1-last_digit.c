#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - sarasa
 * Return: 0
 */

int main(void)
{
	int n;
	int dig = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        
	dig = n % 10;

	if (dig > 5) 
	{
		printf("The last digit of %d",n);
		printf(" is %d", dig );
 		printf(" and is less than 6 and not 0");
	}
	else if (dig < 5)
	{
		printf("The last digit of %d",n);
		printf(" is %d", dig );
		printf(" and is greater than 5");
       } else 
       {
		printf("The last digit of %d",n);
 		printf(" is %d", dig );
 		printf(" and is 0");
       }
       
        /* your code goes there */
        
        return (0);
}
