#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - Generate length of a string
 * @s: String variable to evaluate
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return(i);
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
 * new_dog - Creates new dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of the dog
 * Return: New dog's information
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int length1, length2;

	length1 = _strlen(name);
}
