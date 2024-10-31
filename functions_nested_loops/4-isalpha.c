#include "main.h"

/**
 * _isalpha  - est whether c is a character of class alpha.
 *
 * Returns 1 if c is a letter, lowercase or uppercas
 * Returns 0 otherwise
 */

int _isalpha(int c);

{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
