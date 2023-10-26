#include "main.h"
/**
 * _strlen_recursion - Printing the string length
 * @s: String to be used
 * Return: Something
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
