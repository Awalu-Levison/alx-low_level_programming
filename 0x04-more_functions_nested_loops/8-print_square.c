#include "main.h"
/**
 * print_square - Prints the square of given input
 * @size: parameter to check
 */
void print_square(int size)
{
	int number1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (number1 = 0; number1 < (size); number1++)
		{
			_putchar('#');
			_putchar('\n');
		}
	}
}
