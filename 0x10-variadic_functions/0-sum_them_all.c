#include "variadic_functions.h"
/**
 * sum_them_all - A function that summing up intergers
 * @n: The number of arguments
 * Return: The sum of the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list args;
	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}
