#include "main.h"
/**
 * *_strcat - A function to concatenate two strings
 * @dest: First Pointer parameter to character variable
 * @src: Second pointer parameter to character variable
 * Return: Character value
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
