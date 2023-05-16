#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - frees a 2 dimensional grid previously created
 *@grid : the address of the two dimensional grid
 *@height: height of grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
	{
		return;
	}

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
