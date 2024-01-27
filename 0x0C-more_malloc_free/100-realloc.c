#include "main.h"
/**
 * *_realloc - A function that reallocate memory for the pointer
 * @ptr: Old pointer
 * @old_size: Old size of the malloc
 * @new_size: New size of the malloc
 * Return: Void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *my_ptr;
	unsigned int i, max = new_size;
	char *old_ptr = ptr;

	if (ptr == NULL)
	{
		my_ptr =  malloc(new_size);
		return (my_ptr);
	}

	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	else if (new_size == old_size)
		return (ptr);

	my_ptr = malloc(new_size);
	if (my_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (i = 0; i < max; i++)
		my_ptr[i] = old_ptr[i];
	free(ptr);
	return (my_ptr);
}
