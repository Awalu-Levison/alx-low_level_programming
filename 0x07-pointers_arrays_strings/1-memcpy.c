include "main.h"
/**
 * *_memcpy - A function that copies memory area
 * @dest: Destination variable that receives bytes from src
 * @src: The source of bytes to be used
 * @n: Available number of bytes
 * Return: Destination bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;

	for (y < n; dest[y] != '\0'; y++)
	{
		while (src[y] != '\0')
		{
			dest[y] = src[y];
			dest++;
			y++;
		}
		n--;
	}
	return (dest);
}
