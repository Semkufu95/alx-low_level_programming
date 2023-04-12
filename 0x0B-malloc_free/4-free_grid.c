#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function to free 2d array created
 * @grid: 2 dimensional array  grid
 * @height: height dimension of grid
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
