#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: Print
 * Return: 0
 */
int main(void)
{
	int n, num1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	num1 = n % 10;
	printf("%d\n", n);

	if (num1 < 5)
		printf("%dis greater than 5\n", num1);
	else if (n == 0)
		printf("%dis 0\n", num1);
	else
		printf(" and is less than 6 and not 0");
	return (0);
}

