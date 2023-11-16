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

	if (n <= 0)
	{
		return (0);
	}

	int j = 0, i = 0;

	else
	{
		while (i < n)
		{
			int x = va_arg(args, int);

			j += x;
			i++;
		}
	}
	va_end(args);
	return (j);
}
