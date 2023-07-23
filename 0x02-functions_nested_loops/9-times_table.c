#include "main.h"
/**
 * times_table - Printing the 9 times table
 * Return:0 Upon successful execution
 */
void times_table(void)
{
	int k;
	int h;
	int multiply;

	for (k = 0; k < 10; k++)
	{
		_putchar('0');
		for (h = 1; h < 10; h++)
		{
			_putchar(',');
			_putchar(' ');
			multiply = k * h;

			if (h <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((multiply / 10) + '0');
				_putchar((multiply % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
