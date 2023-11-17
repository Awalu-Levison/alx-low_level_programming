#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - printing numbers well separated
 * @separator: String between two numbers
 * @n: Numbers passed to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, list;

	va_list pointer;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		list = va_arg(pointer, const unsigned int);
		printf("%d", list);

		if (i != (n - 1 && separator != NULL)
				printf("%s", separator);
	}
	prinf("\n");
}
