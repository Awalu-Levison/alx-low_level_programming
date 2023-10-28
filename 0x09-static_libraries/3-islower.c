#include "main.h"
/**
 ** _islower - Checking if character is lower case
 ** @c: Parameter to check
 ** Return: 1 lowercase or 0 for others
 **/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
