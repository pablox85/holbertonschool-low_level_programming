#include "main.h"
/**
 *
 *
 *
 *
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >=97 && str[i] <= 122) && (str[i] = 9, 10, 32, 34 )
		{
			str[i] = str[i] - 32;
			}
		i++;
			}

return (str);
	}
