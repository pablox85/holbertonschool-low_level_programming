#include "main.h"

/**
 * times_table - Imprime la tabla de multiplicar del 0 al 9
 */
void times_table(void)
{
    int i, j, product;

    // Bucle externo para cada fila de la tabla (0 a 9)
    for (i = 0; i <= 9; i++) {
        // Bucle interno para cada columna de la tabla (0 a 9)
        for (j = 0; j <= 9; j++) {
            product = i * j; // Calcula el producto

            // Imprimir el producto
            if (j > 0) { // A partir de la segunda columna, imprime coma y espacio
                _putchar(','); // Imprime la coma
                _putchar(' '); // Imprime el espacio
            }

            // Imprimir el número (puede tener uno o dos dígitos)
            if (product >= 10) {
                _putchar((product / 10) + '0'); // Imprime la decena
            }
            _putchar((product % 10) + '0'); // Imprime la unidad
        }
        _putchar('\n'); // Salto de línea al final de cada fila
    }
}

