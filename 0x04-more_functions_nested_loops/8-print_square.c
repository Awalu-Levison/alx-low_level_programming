#include "main.h"
/**
 * print_square - Prints the square of given input
 * @size: parameter to check
 */
void print_square(int size)
{
	int number;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (number = 0; number < size; number++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
