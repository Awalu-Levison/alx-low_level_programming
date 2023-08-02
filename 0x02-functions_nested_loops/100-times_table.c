#include "main.h"
/**
 * print_times_table - Prints times table (9 times)
 * @n: Integer value to be used
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, x;

	if (n < 0 || n > 15)
	{
		break;
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = i; j < n; j++)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				if (x <= 9)
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
