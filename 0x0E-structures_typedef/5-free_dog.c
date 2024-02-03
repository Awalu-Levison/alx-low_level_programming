#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - A function that frees the structure of a dog
 * @d: Pointer to the struct of dog
 */
void free_dog(dog_t *d)
{
	while (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
