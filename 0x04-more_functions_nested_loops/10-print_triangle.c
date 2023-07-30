#include "main.h"
/**
 * print_triangle - Prints a tringle based on the given size
 * @size:Parameter to be used
 */
void print_triangle(int size)
{
	int iteration, space, symbol;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (iteration = 1; iteration <= size; iteration++)
		{
			for (space = size - iteration; space >= 1; space++)
			{
				for (symbol = 1; symbol <= iteration; symbol++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
	}
}
