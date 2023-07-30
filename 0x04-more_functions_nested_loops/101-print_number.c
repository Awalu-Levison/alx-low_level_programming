#include "main.h"
/**
 * print_number - A function that prints intergers only
 * @n: Parameter to be used
 */
void print_number(int n)
{
	unsigned int first_value = n;

	if (n < 0)
	{
		_putchar(45);
		first_value = -first_value;
	}
	if (first_value / 10)
	{
		print_number(first_value / 10);
		_putchar(first_number % 10 + '0');
	}
}
