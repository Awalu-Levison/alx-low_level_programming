#include "main.h"
/**
 * **strtow - A function that split a string into words
 * @str: String to be used
 * Return: Pointer to an array of words
 */
char **strtow(char *str)
{
	int i;
	char **word;

	if (str == NULL || *str == '\0')
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	word = malloc(sizeof(char *) * (i + 1));
	if (word == NULL)
	{
		free(word);
		return (NULL);
	}
	while (str)
	{
		i = 0;
		if (str[i] == " ")
		{
			word[i++] = "\0";
			word[i++] = "\n";
			i++;
		}
		free(word[i]);
		free(word);
	}
	return (word);
}
