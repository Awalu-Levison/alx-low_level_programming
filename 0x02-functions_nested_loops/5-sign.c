#include "main.h"
/**
 * print_sign - Printing the sign of the number
 * @n: Parameter to check
 * Return: 1, + if greatyer than 0
 * 0 if 0 and -1, - if less  than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else
	{

		_putchar('-' + 1);
	}
	_putchar('\n');
}
