#include "main.h"
/**
 * *string_nconcat - A function that concatenates two strings
 * @s1: First given string
 * @s2: Second given string
 * @n: Integer parameter
 * Return: Pointer to new memory allocation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + n) + 1);
	if (ptr == NULL)
		return (NULL);
	if (n >= len2)
	{
		for (i = 0; s1[len1] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			ptr[len1 + 1] = s2[i];
		ptr[len1 + 1] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			ptr[i] = s1[i];
		for (i = 0; i < n; i++)
			ptr[len1 + 1] = s2[i];
		ptr[len1 + 1] = '\0';
	}
	return (ptr);
}
