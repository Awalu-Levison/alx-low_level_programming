#include "main.h"
/**
 *  more_numbers - A function that prints number 0 through 14 in 10 times
 */
void more_numbers(void)
{
	int first_number;

	for (first_number = 0; first_number < 10; first_number++)
	{
		char second_number;

		for (second_number = 0; second_number <= 14; second_number++)
		{
			if (second_number >= 10)
			_putchar(second_number / 10 + '0');
			_putchar(second_number % 10 + '0');
		}
	_putchar('\n');
	}
}
