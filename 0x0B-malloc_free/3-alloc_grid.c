#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - Returning a pointer to 2-dimension array
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: Pointer to 2-Dimension array of integers
 */
int **alloc_grid(int width, int height)
{
	int length = width * height;
	int **grid, i, j;

	if (length <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;

	return (array);
}
