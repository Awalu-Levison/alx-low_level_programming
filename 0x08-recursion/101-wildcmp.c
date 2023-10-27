#include "main.h"
/**
 * wildcmp - A function that compares two strings
 * @s1: First string given
 * @s2: Second string given (may have special characters)
 * Return: 1 if strings are identical
 * otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	else if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
