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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("Positive");
}
	else if (n == 0)
{
	printf("zero");
}
	else
{
printf("Negative");
}
	return (0);
}
