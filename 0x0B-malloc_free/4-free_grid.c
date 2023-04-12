#include "main.h"
#include <stdlib.h>
/**
 * free_grid - rees a 2 dimensional grid previously created.
 * @grid: the 2D grid to free
 * @height: the height of the grid
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
