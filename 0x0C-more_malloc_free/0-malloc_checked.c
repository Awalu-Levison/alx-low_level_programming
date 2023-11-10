#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - Allocating memory using mallo()
 *
 * @b: Non negative int variable to be used
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer NULL)
	{
		free(pointer);
		exit(98);
	}
}
