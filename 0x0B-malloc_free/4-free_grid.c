#include "main.h"
/**
 * free_grid - Free up space for grid created
 * @grid: The grid created
 * @height: Height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
