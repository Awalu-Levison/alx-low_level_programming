#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int first_var = 0;
	int second_var;
	int third_var;
	char temporary;

	while (s[first_var] != '\0')
	{
		first_var++;
	}
	third_var = first_var - 1;

	for (second_var = 0; third_var >= 0 && second_var < third_var; third_var--, second_var++)
	{
		temporary = s[b];
		s[second_var] = s[third_var];
		s[third_var] = temporary;
	}
}
