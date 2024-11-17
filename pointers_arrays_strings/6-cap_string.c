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

	while (str[i] != '\0') /*busqueda carcter nulo*/
	{
	if (str[i] >= 97 && str[i] <= 122
		i == 0 ||
		str[i -  1] == ',' ||
		str [i - 1] == ';' ||
		str [i - 1] == '.' ||
		str [i - 1] == '!' ||
		str [i - 1] == '?' ||
		str [i - 1] == '"' ||
		str [i - 1] == '(' ||
		str [i - 1] == ')' ||
		str [i - 1] == '{' ||
		str [i  -1] == '}' ||
		str [i - 1] == ' ' ||
		str [i - 1] == '\t'||
		str [i - 1] == '\n'||
		)
	{
	
	}

	}


	/* str[i] = str[i] - 32; mayusculas */
