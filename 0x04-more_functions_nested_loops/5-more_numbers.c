#include "main.h"
/**
 *  more_numbers - A function that prints number 0 through 14 in 10 times
 */
void more_numbers(void)
{
	char first_number;
	char second_number;

	for (first_number = '1'; first_number <= '10'; first_number++)
	{
		for (second_number = '0'; second_number <= '14'; second_number++)
		{
			_putchar(second_number);
		}
			_putchar('\n');
	}
	_putchar('\n');
}
