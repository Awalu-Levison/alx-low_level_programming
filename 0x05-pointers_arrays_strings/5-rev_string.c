#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int counter = 0;
	/*int var_const;*/


	while (*s != '\0')
	{
		counter++;
		s++;
	}
	for (counter = *s - 1; counter >= 0; counter--)
	{
		return (s[counter]);
	}
	_putchar('\n');
}
