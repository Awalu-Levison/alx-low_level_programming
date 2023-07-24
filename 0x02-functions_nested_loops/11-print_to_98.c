#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints natural numbers from 0 to 98
 * @n:Parameter to check upon
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d", n--);
		}
		printf("%d", n);
		printf(",");
		printf(" ");
	}
	else
	{
		while (n < 98)
		{
			printf("%d", n++);
		}
		printf("%d", n);
		printf(",");
		printf(" ");
	}
}
