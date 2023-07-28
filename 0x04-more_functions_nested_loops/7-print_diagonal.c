#include "main.h"
/**
 * print_diagonal - Printing diagonal lines
 * @n:An integer variable to check upon
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int num1, num2;

		for (num1 = 1; num1 < n; num1++)
		{
			for (num2 = 1; num2 < n; num2++)
			{
				if (num1 == num2)
					_putchar('\\');
				else if (num1 < num2)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
