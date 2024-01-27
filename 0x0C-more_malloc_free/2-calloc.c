#include "main.h"
/**
 * *_calloc - A function allocates memory for an array
 * of nmemb elements of size bytes
 * @nmemb: First parameter
 * @size: Size of the first parameter
 * Return: Pointer to allocated memory or NULL upon failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *my_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	my_ptr = calloc(nmemb, size);
	if (my_ptr == NULL)
		return (NULL);
	else
		return (my_ptr);
}
