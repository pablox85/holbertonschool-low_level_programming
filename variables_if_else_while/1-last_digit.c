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
	printf("Last digit of %d ", n);

	if (num1 > 5)
		printf("%d and is greater than 5\n", num1);
	else if (n == 0)
		printf("%d and is 0\n", num1);
	else
		printf(" and is less than 6 and not 0\n");
	return (0);
}
