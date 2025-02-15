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

	if (dig >= 7)
	{
		printf("The last digit of %d", n);
		printf(" is %d", dig);
		printf(" and is greater than 5\n");
	}
	else if (dig == 0)
	{
	printf("The last digit of %d", n);
	printf(" is %d", dig);
	printf(" and is 0 \n");
	else
	{
		printf("The last digit of %d", n);
		printf(" is %d", dig);
		printf(" and is less than 6 and not 0\n");
	}


return (0);
}
