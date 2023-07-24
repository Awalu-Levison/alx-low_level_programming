#include "main.h"
/**
 * times_table - Printing the 9 times table
 * Return:0 Upon successful execution
 */
void times_table(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 9; num1)
	{
		_putchar('0');
		for (num2 = 0; num2 <= 9; num2++)
		{
			num3 = num1 * num2;
			if (num3 == 0)
			{
				_putchar(num3 + '0');
			}
			if (num3 < 10 && num2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num3 + '0');
			}
			else if (num3 >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((num3 / 10) + '0');
				_putchar((num3 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
