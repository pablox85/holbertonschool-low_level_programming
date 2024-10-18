#include <stdio.h>
/**
*main - entry ponint
*
*imprimir del tamano de varios tipos de archivos
*Return:0
*/
int main(void)
{
	printf("Size of a char: %zu \n", sizeof(char));
	printf("Size of an int: %zu \n", sizeof(int));
	printf("Size of a long int: %zu \n", sizeof(long int));
	printf("Size of long long int: %zu \n", sizeof(long long int));
	printf("Size of a float: %zu \n", sizeof(float));
	return (0);
}
