#include "main.h"
/**
 * rev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	char first_var;
	int second_var;
	int third_var;

	while (s[second_var] != '\0')
		second_var++;
	for (third_var = 0; third_var < second_var; third_var++)
	{
		second_var--;
		first_var = s[third_var];
		third_var = s[second_var];
		s[second_var] = first_var;
	}
}
