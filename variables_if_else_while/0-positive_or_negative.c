#include <stdio.h>
/**
 * main - negative or positive
 * Return: 0
 *
 */
int main(void)

{
	int n;
	scanf("%d", &n);
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n < 0)
	{
		printf("is negative\n");
	} else
	{
		printf("is zero\n");
	}
return (0);

}
