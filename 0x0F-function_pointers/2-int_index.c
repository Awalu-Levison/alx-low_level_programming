#include "function_pointers.h"
/**
 * int_index - A function that Searches an integer integer arrays
 * @array: elements of integer type
 * @size: Number of elements
 * @cmp: A function comparing values
 * Return: 0 on success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0; /*index to be used*/

	if (array == NULL || cmp == NULL)
		return (-1);

	while (a < size)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
		a++;
	}
	return (-1);

}
