#include "main.h"
/**
 ** _isupper - A function that checks if a character is upper or not
 ** @c: Character passed to the function
 ** Return: 0 Always success
 **/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
