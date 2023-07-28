#include "main.h"
/**
 * print_most_numbers - Prints numbers and excluding other numbers
 */
void print_most_numbers(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
	{
		if (number == 2 || number == 4)
		{
			break;
		}
		_putchar(number);
	}
	_putchar('\n');
}
