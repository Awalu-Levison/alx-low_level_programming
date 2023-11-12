#include "main.h"
#include <stdlib.h>
/**
 * print_dog - Printing the dogs information
 * @d: The structure of particular dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return (NULL);

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == owner)
		return ("(nil)");

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
