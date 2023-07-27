#include "main.h"
/**
 * _isupper - Printing upper cases
 * @c: Parameter to check at
 * Return: 0 Always success
 */
int _isupper(int c)
{
	if (c == 65)
	{
		return (1);
	}
	else if (c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
