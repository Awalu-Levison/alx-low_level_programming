#include "main.h"
/**
 * *_strcat - A function to concatenate two strings
 * @dest: First Pointer parameter to character variable
 * @src: Second pointer parameter to character variable
 * Return: Character value
 */
char *_strcat(char *dest, char *src)
{
	char combined[] = {};
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	combined[] = {dest + src};
	return (0);
}
