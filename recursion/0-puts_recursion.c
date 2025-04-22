#include "main.h"
/**
 * _puts_recursion - imprime por recursion
 * @s: ptr a s
 */

void _puts_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
return;
}
if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
return;
}