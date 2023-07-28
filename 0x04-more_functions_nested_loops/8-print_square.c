#include "main.h"
/**
 * print_square - Prints the square of given input
 * @size: parameter to check
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int number;

		for (number = 1; number < size; number++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
