#include "function_pointers.h"
/**
 * array_iterator - A unction that executes a function given
 * as a parameter on each element of an array
 * @array: pointer parameter passed to the function
 * @size: size of array
 * @action: function pointer return void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
