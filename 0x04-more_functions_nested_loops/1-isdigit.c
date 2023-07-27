#include "main.h"
/**
 * _isdigit - Checks for a digit value starting from 0 up to 9
 * @c:Parameter to be used
 * Return: 0 On success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
