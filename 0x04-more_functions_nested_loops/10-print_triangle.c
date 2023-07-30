#include "main.h"
/**
 * print_triangle - Prints a tringle based on the given size
 * @size:Parameter to be used
 */
void print_triangle(int size)
{
	int iteration, symbol;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (iteration = 0; iteration < size; iteration++)
		{
			for (symbol = 0; symbol < size; symbol++)
			{
				if (symbol < size - (iteration + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
				_putchar('\n');
		}
	}
}
