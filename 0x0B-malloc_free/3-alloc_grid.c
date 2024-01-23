#include "main.h"
/**
 * **alloc_grid - A function that returns a pointer to a 2
 * dimensional array of integers
 * @width: Width of the grid
 * @height: The height of the grid
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr_grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr_grid = malloc(sizeof(int *) * height);
	if (ptr_grid == NULL)
	{
		free(ptr_grid);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr_grid[i] = malloc(sizeof(int) * width);
		if (ptr_grid[i] == NULL)
		{
			for (i--; i >= 0; i--)
			free(ptr_grid[i]);
			free(ptr_grid);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr_grid[i][j] = 0;
	return (ptr_grid);
}
