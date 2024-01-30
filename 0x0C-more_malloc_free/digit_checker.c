#include "main.h"
/**
 * digit_checker - A function that checks
 * if the given character is digit or not
 * @s: String parameter
 * Return: Something
 */
int digit_checker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}
