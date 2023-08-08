@include "main.h"
/**
 * *_strcpy - Copying strings between two pointers
 * @dest: first char
 * @src: second char
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int v;
	int x;

	while (* (src + 1) != '\0')
	{
		v++;
	}
	for (; x < v; v++)
	{
		dest[v] = src[x];
	}
	dest[v] = '\0';
	return (dest);
}
