#include "main.h"
#include <stdlib.h>
/**
 * free_grid - libera memoria
 * @grid: puntero a filas
 * @height: altura
 * Return: nada
 */

void free_grid(int **grid, int height){

	int i;
	
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

