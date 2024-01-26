#include "main.h"
/**
 * *malloc_checked - A function that allocates memory
 * @b: Parameter to be allocated memory
 * Return: Pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
