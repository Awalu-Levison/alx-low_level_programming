#include "main.h"
/**
 * *string_toupper - Changing string to upper case
 * @c: Character variable to use
 * Return: Character value
 */
char *string_toupper(char *c)
{
	int y;

	for (y = 0; c[y] != '\0'; y++)
	{
		if (c[y] >= 'a' && c[y] <= 'z')
		{
			c[y] = c[y] - 32;
		}
	}
}
