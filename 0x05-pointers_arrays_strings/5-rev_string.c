#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int i, j;

	i = 0;

	while (*s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	return (s[j]);
}
