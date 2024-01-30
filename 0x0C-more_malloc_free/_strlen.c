#include "main.h"
/**
 * _strlength - A function that calculate the string length
 * @s: String given by the user
 * Return: length of the string
 */
int _strlength(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
