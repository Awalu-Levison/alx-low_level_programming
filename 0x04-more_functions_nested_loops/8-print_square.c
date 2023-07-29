#include "main.h"
/**
 * print_square - Prints the square of given input
 * @size: parameter to check
 */
void print_square(int size)
{
	int number1, number2;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (number1 = 0; number1 < size; number1++)
		{
			for (number2 = 0; number2 < number1; number2++)
			{
			_putchar('#');
			}
			_putchar('\n');
		}
	}
}
