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

			if (n == i)
			{
				dest[j] = src[i -1];
			}

			dest[j] = '\0';
		}

	return (dest);


}
