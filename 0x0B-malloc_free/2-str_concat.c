#include "main.h"
/**
 * *str_concat - A function that concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: Pointer to newly allocated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *ptr;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	for (j = 0; j <= len2; j++)
	{
		s1[i] = s2[j];
		i++;
	}
	return (ptr);
}
