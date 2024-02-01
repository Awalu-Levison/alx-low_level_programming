#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A function that initialises the structure of dog
 * struct dog - Structure of dog
 * @d: Pointer to the other struct members
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
