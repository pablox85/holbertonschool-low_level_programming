#include <stdio.h>
/**
*main - entry ponint
*
*imprimir del tamano de varios tipos de archivos
*Return:0
*/
int main(void)
{
	printf("Size of: %zu \n", sizeof(char));
	printf("Size of %zu \n", sizeof(int));
	printf("Size of: %zu \n", sizeof(long int));
	printf("Size of: %zu \n", sizeof(long long));
	printf("Size of: %zu \n", sizeof(float));
	return (0);
}
