#include "variadic_functions.h"
/**
 * print_all - A function that can print anything
 * @format: The formart specifier
 */
void print_all(const char * const format, ...)
{
	int i, checker;
	va_list ap;
	char *str;

	va_start(ap, format);

	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				checker = 0;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				checker = 0;
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				checker = 0;
				break;
			case 's':
				str = va_arg(ap, char *);

				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				checker = 0;
				break;
			default:
				checker = 1;
				break;
		}
		if (format[i + 1] != '\0' && checker == 0)
			printf(", ");
		i++;
	}
		printf("\n");
}
