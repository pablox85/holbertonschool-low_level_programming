#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int w, h;
	int **grid;

	if (width <= 0)
		return (NULL);
	if(height <= 0)
		return (NULL);


	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return NULL;

	for (h = 0; h < height; h++)
	{
		grid[h] = malloc(width * sizeof(int *));
		if (grid[h] == NULL)
		{
			while (h > 0)
			{
				h--;
				free(grid[h]);
			}
			free(grid);
			return(NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
		grid[h][w] = 0;
		}
	}
	return (grid);
}
