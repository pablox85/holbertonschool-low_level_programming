#include "main.h"
/**
 *_isdigit - Checks if a character is a digit
 *@c: The character to check
 *
 *Return: Return: 1 if c is a digit (0-9), 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

