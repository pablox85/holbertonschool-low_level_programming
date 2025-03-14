#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{

	size_t ss1 = 0, ss2 = 0, i = 0;
	char *strN;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}


	while (s1[ss1] != '\0')
	{
		ss1++;
	}

	while (s2[ss2] != '\0')
	{
		ss2++;
	}
	

	strN = malloc(ss1 + ss2 + 1);

	if (strN == NULL)
	{
	
		return (NULL);
	}

	for (i = 0; i < ss1; i++)
	{
	strN[i] = s1[i];
	}

	for (i = 0; i < ss2; i++)
	{
	strN[ss1 + i] = s2[i];
	}

	strN[ss1 + ss2] = '\0';

return (strN);


}
