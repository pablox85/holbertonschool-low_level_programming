#include "main.h"
#include <limits.h>
/**
 *_atoi - string a numero
 *@s: string dada
 *Return: retorna el valor
 */

int _atoi(char *s)
{

	int i = 0;
	int sign = 1;
	int num = 0;
	int found_digit = 0;
while (s[i])
	{
	if (s[i] == '-')
		sign *= -1;
	else if (s[i] >= '0' && s[i] <= '9')
	{
		if (num > (INT_MAX - (s[i] - '0')) / 10)
		return (sign == 1 ? INT_MAX : INT_MIN);
	num = num * 10 + (s[i] - '0');
	found_digit = 1;
	}
	else if (found_digit)
	break;
	i++;
	}
return (num * sign);
}

