#include "main.h"
/**
 * _isalpha - Checking for alphabetic character
 * @c: Parameter to look upon
 * Return: 1 for alpha characters or 0 for the rest
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
