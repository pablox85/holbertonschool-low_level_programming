#include "main.h"

/**
 * _isupper - check if it's upper or not.
 *@c: uppercase variable
 * Return: 0 if it's not
 */

int _isupper(int c)

{


	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

