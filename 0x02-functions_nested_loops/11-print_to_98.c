#include "main.h"
/**
 * print_to_98 - Prints natural numbers from 0 to 98
 * @n:Parameter to check upon
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(',');
		_putchar(' ');
		if (n == 98)
		{
			continue;
		}
		else
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
