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
	int n;
	int num1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	num1 = n % 10;
	printf("%d\n", n);

	if (num1 < 5)
		printf(" %d is greater than 5\n", num1);
	else if (n == 0)
		printf(" %d is 0\n", num1);
	else
		printf(" dale puto");
	return (0);
}

