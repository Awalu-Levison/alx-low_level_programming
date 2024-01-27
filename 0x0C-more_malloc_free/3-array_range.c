#include "main.h"
/**
 * *array_range - A function that creates an array of integers
 * @min: The minimum number
 * @max: The maximum number
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, length;
	int *my_ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	my_ptr = malloc(sizeof(int) * length);
	if (my_ptr == NULL)
	{
		free(my_ptr);
		return (NULL);
	}
	else
	{
		for (i = 0; i < length; i++)
		{
			my_ptr[i] = min;
			min++;
		}
	}
	return (my_ptr);

}
