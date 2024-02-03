#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Generates the length of a string
 * @s: Parameter to be used
 * Return: (0 on successful execution)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);

	return (0);
}

/**
 * _strcpy - copy the string pointed to by src to dest
 * @dest: First char to check
 * @src: First char to check
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';
	return (dest);
}

/**
 * *new_dog - A function that creates a new dog
 * @name: Name of new dog
 * @age: Age of dog
 * @owner: Owner of the dog
 * Return: Pointer to the structure of dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2;
	dog_t *my_dog;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);
	my_dog->name = malloc(sizeof(char) * (len1 + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		free(owner);
		return (NULL);
	}
	_strcpy(my_dog->name, name);
	_strcpy(my_dog->owner, owner);
	my_dog->age = age;
	return (my_dog);
}
