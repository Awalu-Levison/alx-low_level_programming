#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet in 10 times
 * return: Always 0
 */
void print_alphabet_x10(void)
{
	int first_n;
	int second_n;

	for (first_n = 0; first_n <= 10; first_n++)
	{
		for (second_n = 97; second_n <= 122; second_n++)
		{
			_putchar(second_n);
		}
		_putchar('\n');
	}
}
