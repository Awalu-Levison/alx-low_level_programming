#include "main.h"
/**
 * _strlen_recursion - Printing the length
 * of a string through recursion in C
 * @s: Character variable to use
 * Return: (0 is always success)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
