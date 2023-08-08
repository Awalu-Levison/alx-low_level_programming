@include "main.h"
/**
 * *_strcpy - Copying strings between two pointers
 * @dest: first char
 * @src: second char
 * Return: 0 is success
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}
