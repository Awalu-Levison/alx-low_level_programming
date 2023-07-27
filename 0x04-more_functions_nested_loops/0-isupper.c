#include "main.h"
/**
 * _isupper - Printing upper cases
 * @c: Parameter to check at
 * Return: 0 Always success
 */
int _isupper(int c)
{
	if ((c > 97 && c <= 122) || (c > 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
