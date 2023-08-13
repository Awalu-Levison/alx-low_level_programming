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

	while (s1[v] != '\0' && s2[v] != '\0')
	{
		if (s1[v] != s2[v])
		{
			return (s1[v] - s2[v]);
		}
		v++;
	}
	return (0);
}
