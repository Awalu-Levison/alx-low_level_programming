#include "main.h"
/**
 * *_strncat - A function that concatenates two strings.
 * @dest: First Character var passed as pointer parameter
 * @src: Second character vr passed as pointer parameter
 * @n: No of bytes to be used
 * Return: Character string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
