#include "main.h"
#include <ctype.h>

/**
 *_isalpha- Nunca entiendo bien el ejercicio
 *@c: letras del alfabeto
 *Return: 1 if letter 0 isnt
 */

int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
