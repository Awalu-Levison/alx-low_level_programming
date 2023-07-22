#include "main.h"
/**
 * jack_bauer - Printing day or long time zones
 * Return: 0 On success
 */
void jack_bauer(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0; num1 <= 2; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			for (num3 = 0; num3 <= 5; num3++)
			{
				for (num4 = 0; num4 <= 9; num4++)
				{
					if (num1 >= 2 && num2 >= 4)
					{
						break;
						_putchar(48);
						_putchar(48);
						_putchar(58);
						_putchar(48);
						_putchar(48);
					}
				}
			}
		}
	}
	_putchar('\n');
}
