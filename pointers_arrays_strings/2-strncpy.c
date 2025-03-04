#include "main.h"
/**
 *
 *
 *
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;
	int j = 0;

		while (src[i] != '\0')
		{
			i++;
        if(i < n)
        {
        break;
        }

		}

			dest[j] = '\0';
		

	return (dest);


}
