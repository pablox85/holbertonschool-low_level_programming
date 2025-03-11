#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */

char *_strdup(char *str)
{
	char *copy;
	copy = strdup(str);

	int i = 0;
	
	if (copy == NULL)
	{
		return (NULL);
	}

	while (copy[i] != '\0' && str[i] != '\0')
	{
		if (copy[i] == str[i])
		{
			i++;
			
		}
		else
		{
			return NULL;
		}
	}
	free(copy);


}

