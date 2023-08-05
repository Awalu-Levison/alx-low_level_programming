#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int *i, j;

	*i = &s;

	while (*s != '\0')
	{
		*s++;
	}
	for (i = *s; i >= 0; i--)
	{
		return (s[i]);
	}
}
