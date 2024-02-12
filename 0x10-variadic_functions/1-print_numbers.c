#include "variadic_functions.h"
/**
 * print_numbers - A function adding collection
 * of numbers passed to the program
 * @separator: String printed between two numbers
 * @n: Number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;

	va_start(args, n);

	while (i < n)
	{
		if (separator == NULL)
			return;
		int num = va_arg(args, int);

		printf("%d", num);
		printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
