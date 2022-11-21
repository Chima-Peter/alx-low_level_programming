#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Frees the grid
 *
 * @**grid: to be freed
 *
 * @height: Height of array.
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
