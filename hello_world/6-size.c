#include <stdio.h>
/**
 * main - main function
 * Return: 0
 *
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)", sizeof(char));
	printf("Size of a int: %zu byte(s)", sizeof(int));
	printf("Size of a long int: %zu byte(s)", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
