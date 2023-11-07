#include "main.h"
#include <stdlib.h>
/**
 * free_grid - 2-Dimensional grid to be freed from memory
 * @grid: pointer to the 2-dimensioal array of grid
 * @height: The actual height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	if (grid != NULLL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
