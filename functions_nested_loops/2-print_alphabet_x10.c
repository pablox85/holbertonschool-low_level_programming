#include "main.h"
/**
 * print_alphabet_x10 - escribe 10 veces el abcdario
 * seguido de una nueva línea
 */
void print_alphabet_x10(void)
{
        int i;
        int j;
        
        for (i = 0; i <= 9; i++)
        {
                for (j = 'a'; j <= 'z'; j++)
                {
                        _putchar(j);
                }
                _putchar('\n');
        }
}
