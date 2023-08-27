#include "main.h"
/**
 * set_string - A function that sets pointer to a character
 * @s: The source pointer string to be used
 * @to: A variable to receive the converted value
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	int i;
	int converted_char;

	for (i = 0; s[i] >= '\0'; i++)
	{
		converted_char++;
	}
	while (*to)
	{
		to[converted_char] = &s[i];
		to++;
		i++;
	}
}

