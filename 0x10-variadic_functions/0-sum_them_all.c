#include "variadic_functions"
#include <stdarg.h>
/**
 * sum_them_all - Summing up of all given arguments
 *
 * @n: Constant value passed to the func()
 * Return: 0 Always sucess
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int x = va_arg(args, int);

	while (n <= 0)
		return (0);
	while (n > 0)
	{
		int i, sum = 0;

		for (i = 0; i < n; i++)
		{
			sum += x;
		}
	}
	va_end(args);
	return (sum);
}
