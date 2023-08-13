#include "main.h"
/**
 * _strcmp - Compares two given strings
 * @s1: First string to compare with
 * @s2: Second string to compare with
 * Return: (0 upon successful execution)
 */
int _strcmp(char *s1, char *s2)
{
	int v;

	while (*s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if(s1 == s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
	return (0);
}
