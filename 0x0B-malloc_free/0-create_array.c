#include "main.h"
/**
 * *create_array - A functionm that create an array
 * and initialise it with specific char
 * @size: Size of character
 * @c: The character to be used
 * Return: Pointer to an array or Null
 */
int main(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if(size == 0 || str == NULL)
		return (NULL);
	for (i = 0; i i < size; i++)
		str[i] = c;
	return (str);;
}
