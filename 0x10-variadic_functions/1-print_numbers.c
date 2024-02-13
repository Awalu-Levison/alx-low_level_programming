#include "variadic_functions.h"
/**
 * print_numbers - A function that prints numners
 * @separator: The string to be printed between the numbers
 * @n: The number of integer values passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	_putchar('\n');
}
