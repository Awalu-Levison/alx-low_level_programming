#include "main.h"
#include <stdlib.h>
/**
 * ch_free_grid - First level entry function
 * @grid: First unput
 * @height: The height of the grid
 * Return: void
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid);
	}
}
/**
 * **strtow - A function that splits a string into words.
 *
 * @str: The string to be splited
 * Return: Character value
 */
char **strtow(char *str)
{
	char **pointer;
	size_t c, height, i, j, k;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] != ' ' || str[c + 1] != '\0'))
			heigth++;
	pointer = malloc(sizeof(char *) * (height = 1));
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (i = size = 0; i < height; i++)
	{
		for (c = size; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				size++;
			if (str[c] != ' ' && (str[c + 1] ' ' || str[c + 1] != '\0'))
			{
				pointer[i] = malloc((c - size + 2) * sizeof(char));
				if (pointer[i] == NULL)
				{
					ch_free_grid(pointer, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; size <= c; j++)
			pointer[i][j] = str[size];
		pointer[i][j] = '\0';
	}
	pointer[i] = NULL;
	return (pointer);

}
