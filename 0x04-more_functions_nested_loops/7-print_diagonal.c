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

		for (num1 = 0; num1 < n; num1++)
		{
			for (num2 = 0; num2 < num1; num2++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
		}
	}
}
