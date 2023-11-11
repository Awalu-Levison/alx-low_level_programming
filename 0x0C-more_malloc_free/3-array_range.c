#include "main.h"
#include <stdlib.h>
/**
 * *array_range - A fucntion that creates an array of integers
 *
 * @min: The minimum element of an array
 * @max: The maximumelement of an array
 * Return: o upon successful compilation
 */
int *array_range(int min, int max)
{
	int j;
	int *ptr;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	ptr = malloc(sizeof(int) * j);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}