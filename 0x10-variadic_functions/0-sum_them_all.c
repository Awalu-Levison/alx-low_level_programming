#include "variadic_functions.h"
/**
 * sum_them_all - Summing up of all given arguments
 *
 * @n: Constant value passed to the func()
 * Return: 0 Always sucess
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;

	va_list my_list;
	va_start(my_list, n);

	if (n == 0)
		return (0);

	for (i = 0, i < n; i++)
		sum += va_arg(my_list, int);
	va_end(my_list);

	return (sum);
}
