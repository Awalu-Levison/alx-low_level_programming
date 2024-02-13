#include "variadic_functions.h"
/**
 * print_strings - A function that print strings
 * @separator: String printed between strings
 * @n: The number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *mystr = va_arg(ap, char *);

		printf("%s", mystr);
		if (mystr == NULL)
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
