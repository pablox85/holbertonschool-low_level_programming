#include "main.h"
/**
 *
 *
 *
 */

int _atoi(char *s)
{

	int i = 0;
	int signo = 1;
	int num = 0;
	int digito = 0;

		while (s[i])
		{
			if (s[i] == '-')
			{
				signo *= -1;
			}
			else if (s[i] >= '0' && s[i] <= '9')
			{
				num = num * 10 + (s[i] - '0');
				digito = 1;
			}
			else if	(digito)
			{
				break;
				i++;
			}
		}
	return (num * signo);

}
