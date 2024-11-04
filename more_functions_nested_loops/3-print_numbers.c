#include "main.h"

/**
 * print_most_numbers - Imprime los números del 0 al 9, omitiendo el 2 y el 4,
 * seguido de una nueva línea.
 */
void print_most_numbers(void)
{
    int i;

    for (i = 0; i <= 9; i++)
    {
        if (i == 2 || i == 4)
        {
            continue; // Salta la iteración si i es 2 o 4
        }
        else
        {
            _putchar(i + '0'); // Imprime el carácter numérico correspondiente
        }
    }
    
    _putchar('\n'); // Imprime una nueva línea al final
}
