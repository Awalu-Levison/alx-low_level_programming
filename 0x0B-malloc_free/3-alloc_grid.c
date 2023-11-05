#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - Return a pointer to 2D-array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: Integer pointer of 2D - array
 */
int **alloc_grid(int width, int height)
{
	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	int array[width][height] = {0, 0, 0, 0};
	int *pointer = array;

	return (ponter);
}
