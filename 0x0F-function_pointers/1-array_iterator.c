#include "function_pointers.h"
/**
 * array_iterator - A function that executes a function
 * given as a parameter
 * @array: Array to iterate
 * @size: The size of the array
 * my_iterator - Internal function of another function
 * @action: Pointer to the function in question
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
