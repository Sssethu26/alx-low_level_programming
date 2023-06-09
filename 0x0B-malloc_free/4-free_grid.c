#include "main.h"
#include <stdlib.h>

/**
 * free_grid -function that frees a 2 dimensional grid
 * @grid: the adress of the two dimensional grid
 * @height: height of grid
 * Return: 0
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
