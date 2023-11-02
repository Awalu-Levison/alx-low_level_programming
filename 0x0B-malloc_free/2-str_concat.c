#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - Concatenating two strings in malloc functions
 *
 * @s1: First string
 * @s2: Second string
 * Return: Character value
 */
char *str_concat(char *s1, char *s2)
{
	size_t a, b, c, level;
	char *point;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NUL)
	{
		s2 = "";
	}

	a = 0;
	while (s1[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (s2[b] != '\0')
	{
		b++;
	}
	/*Allocating memory*/
	point = malloc(sizeof(char) * (a + b + 1));
	if (point == NULL)
	{
		free(point);
		return (NULL);
	}
	for (c = 0; c < a; c++)
	{
		point[c] = s[c];
	}
	for (level = 0; level < b; level++)
	{
		point[c] = s2[level];
		c++;
	}
	return (point);
}
