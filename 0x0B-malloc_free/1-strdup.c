#include "main.h"
/**
 * *_strdup - Creating pointer to allocated space
 * @str: The string to be used
 * Return: Character value
 */
char *_strdup(char *str)
{
	size_t a, b;
	char *new_pointer;

	if (str == NULL)
	{
		return (NULL);
	}
	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	new_pointer = malloc((sizeof(char *) * (a + 1)));
	if (new_pointer == NULL)
	{
		return (NULL);
	}
	for (b = 0; b <= a; b++)
	{
		new_pointer[b] = str[b];
	}
	return (new_pointer);
}
