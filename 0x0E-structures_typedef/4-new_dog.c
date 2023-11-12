#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog - A function to create new dog
 * @name: The name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 * Return: Dog's information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;
	int a, b; /*a and b : lengths of name and owner*/

	a = _strlen(name);
	b = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
