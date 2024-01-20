#include "main.h"
/**
 * *_strdup - Duplicate a string
 * @str: String to be used
 * Return: Str or NULL
 */
char *_strdup(char *str)
{
	unsigned int i, j;
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	str1 = (char *)malloc(sizeof(char) * (i + 1));
	if (str1 == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < i)
	{
		str1[j] = str[j];
		j++;
	}
	return (str1);
}
