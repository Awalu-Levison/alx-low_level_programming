#include "main.h"
/**
 * _strlen_recursion - A function that calculates length of a string
 * @s: String used
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
