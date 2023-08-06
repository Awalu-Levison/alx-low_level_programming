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
	for (j = 0; j < i / 2; j++)
	{
		k = s[i];
		s[j] = s[j - i - 1];
		k = s[i - j - 1];
	}
}
