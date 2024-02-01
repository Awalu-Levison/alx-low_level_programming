#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - Printing the structure of dog
 * struct dog - The structure of dog
 * @d: Pointer to the structure of Dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
