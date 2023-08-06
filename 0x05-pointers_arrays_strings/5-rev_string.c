#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int i, j;
	char k;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = s[i] - 1; j > 0; j--)
	{
		s[j] = s[j - 1];
	}
}
