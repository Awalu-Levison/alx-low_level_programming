#include "main.h"
/**
 * *create_array - A function that creates an array of characters
 * @size: Size of an array
 * @c: The character to b used
 * Return: Character value upon successful execution
 */
char *create_array(unsigned int size, char c)
{
	size_t j;
	char *first_pointer;

	if (size == 0)
	{
		return (NULL);
	}
	first_pointer = malloc(sizeof(char) * size);

	if (first_pointer == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < size; j++)
	{
		first_pointer[j] = c;
	}
	return (first_pointer);
}
