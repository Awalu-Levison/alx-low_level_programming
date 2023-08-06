#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int counter, first_var;
	char var_const;

	counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	for (first_var = 0; first_var < counter / 2; first_var++)
	{
		var_const = s[counter - first_var - 1];
		var_const = s[counter - first_var - 1];
	}
}
