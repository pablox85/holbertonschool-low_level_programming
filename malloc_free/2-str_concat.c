#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{

	size_t ss1;
	size_t ss2;
	char *strN;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		return ("");
	}

	ss1 = strlen(s1);
	ss2 = strlen(s2);

	strN = malloc(ss1 + ss2 + 1);

	if (strN == NULL)
	{
	
		return (NULL);
	}

	strncpy(strN, s1, ss1);
	strncpy(strN + ss1, s2, ss2);

	strN[ss1 + ss2] = '\0';
	
return (strN);


}
