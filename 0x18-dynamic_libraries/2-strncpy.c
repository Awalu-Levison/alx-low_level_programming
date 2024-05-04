#include "main.h"
/**
 * *_strncpy - Copying strings
 * @dest: First input
 * @src: Second input
 * @n: Third input
 * Return: (Character value)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
