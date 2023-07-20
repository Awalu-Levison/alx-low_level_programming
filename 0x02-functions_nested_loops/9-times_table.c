#include "main.h"
/**
 * times_table - Printing the 9 times table
 * Return:0 Upon successful execution
 */
void times_table(void)
{
	int k;
	int h;

	for (k = 0; k < 10; k++)
	{
		for (h = 1; h <= 9; h++)
		{
			_puitchar((k % 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(' ');

			if (h == 9)
			{
				continue;
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
	return (0);
}
