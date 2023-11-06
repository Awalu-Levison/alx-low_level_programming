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
	int i, j;
	int **board;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	board = malloc(height * sizeof(int *));
	if (board == NULL)
	{
		free(board);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		board[i] = malloc(height * sizeof(int));
		if (board[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(board);
			free(board[i]);
			return (NULL);
		}
	}
	for (j = 0; j < width; j++)
	{
		board[j] = malloc(width * sizeof(int));
		if (board[j] == NULL)
		{
			for (j--; j >= 0; j--)
				free(board);
			free(board[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			board[i][j] = 0;
	return (board);
}
