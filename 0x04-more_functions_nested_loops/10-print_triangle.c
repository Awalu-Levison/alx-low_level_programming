#include "main.h"
/**
 * print_triangle - Prints tringle based on the given size
 * @size:Parameter to check
 */
void print_triangle(int size)
{
	int times, figure;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (times = 1; times <= size; times++)
		{
			for (figures = size - times0; figures >= 1; figures--)
			{
				_putchar(' ');
			}
			for (int symbol = 1; symbol <= times; symbol++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
