#include "main.h"
/**
 * _strcmp - Compares two given strings
 * @s1: First string to compare with
 * @s2: Second string to compare with
 * Return: (0 upon successful execution)
 */
int _strcmp(char *s1, char *s2)
{
	int j;
	int v;

	j = 0;
	while (s1[j] != '\0')
	{
		j++;
	}
	v = 0;
	while (s2[v] != '\0')
	{
		v++;
	}
	if (s1[j] == s2[v])
	{
		_strcmp(s1, s2);
	}
	return (0);
}
