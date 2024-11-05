#include <stdio.h>
#include "main.h"
/**
 *swap_int - swap numbers
 *@a: poniter
 *@b: pinter
 *Return: 0
 */

void swap_int(int *a, int *b)
{

	int num;

	num = *a;
	*a = *b;
	*b = num;

}
