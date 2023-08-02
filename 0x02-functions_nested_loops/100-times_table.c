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
		continue;
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(',');
				_putchar(' ');
				x = i * j;
				_putchar(x);
			}
			_putchar('\n');
		}
	}
}
