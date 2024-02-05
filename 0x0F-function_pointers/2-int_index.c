#include "function_pointers.h"
/**
 * int_index - An index function to search for an integer
 * @array: An array to be used
 * @size: The size of an array
 * @cmp: A function that compoares two integers
 * Return: Index of an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
