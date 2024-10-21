#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
// <=6 "and is greater than 5"
//==0 and is  0
// =>5 "and is less than 6 and not  0"
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n",n);
	/* your code goes there */
	return (0);
}
