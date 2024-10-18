#include <stdio.h>
/**
*main - entry ponint
*
*imprimir del tamano de varios tipos de archivos
*Return:0
*/
int main(void)
{
	printf("Size of a char: %zu \n", sizeof(char),"\n byte(s)");
	printf("Size of an int: %zu \n", sizeof(int)"\n byte(s)");
	printf("Size of a long int: %zu \n", sizeof(long int)"\n byte(s)");
	printf("Size of long long int: %zu \n", sizeof(long long int)"\n byte(s)");
	printf("Size of a float: %zu \n", sizeof(float)"\n byte(s)");
	return (0);
}
