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

	for (v = 0; src[v] != '\0'; v++)
	{
		while (src[v] != '\0')
		{
			src[i] = dest[i];
			src++;
		}
	}
	return (dest);

	return (0);
}
