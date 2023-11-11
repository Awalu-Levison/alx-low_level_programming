#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - A function that concatenates two strings
 *
 * @s1: First string passed as argument
 * @s2: Second string passed as argument
 * @n: The size of string
 * Return: Character value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t a, b, c;
	char *d;

	if (s1 == NULL)
		a = 0;
	else
	{
		for (a = 0; s1[a] != '\0'; a++)
			;
	}
	if (s2 == NULL)
		b = 0;
	else
	{
		for (b = 0; s2[b] != '\0'; b++)
			;
	}
	if (b > n)
		b = n;
	/* Allocating memory for newly allocated space*/
	d = malloc(sizeof(char) * a + b + 1);
	if (d == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		d[c] = s1[c];
	for (c = 0; c < b; c++)
		d[c + a] = s2[c];
	d[a + b] = '\0';
	return (d);
}
