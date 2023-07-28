#include "main.h"
/**
 * print_line - A function that prints a line to the terminal
 * @n:Parameter to check
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int second_var;

		for (second_var = 1; second_var <= n; second_var++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
