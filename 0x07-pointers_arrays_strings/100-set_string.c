#include <stdio.h>
#include "main.h"
/**
 * set_string - A function that sets pointer to a character
 * @s: The source pointer string to be used
 * @to: A variable to receive the converted value
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
