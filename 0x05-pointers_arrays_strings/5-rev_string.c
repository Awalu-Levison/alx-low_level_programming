#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int counter = 0;
	int var_const;


	while (s[counter] != '\0')
	{
		counter++;
		s++;
	}
	for (var_const = s - 1; var_const >= 0; var_const--)
	{
		return (s[var_const]);
	}
	_putchar('\n');
}
