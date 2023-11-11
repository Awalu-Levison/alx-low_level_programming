#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - Allocating memory for the args passed to the func
 * @nmemb: Elements for an array
 * @size: The size of an array used
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	size_t i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0;
	return (ptr);
}
