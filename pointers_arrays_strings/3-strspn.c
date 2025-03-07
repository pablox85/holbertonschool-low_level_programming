#include "main.h"
/**
 *_strspn - nose que hace
 *@s: - stringa establecido
 *@accept: - caracteres a comparar
 *Return: - comparacion
 *
 *
 */

unsigned int _strspn(char *s, char *accept)
{

	unsigned int i = 0;
	int j = 0;
	int encuentra = 0;

	while (s[i] != '\0')
	{
		encuentra = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			encuentra = 1;
			break;
			}
		}



		if (!encuentra)
		{
			break;
		}
	i++;
	}

return (i);
}
