#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - A  function that frees dog's infor memory
 * @d: The structure of dog
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
