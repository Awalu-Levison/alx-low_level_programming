#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints natural numbers from 0 to 98
 * @n:Parameter to check upon
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		printf(",");
		printf(" ");

		while (n > 98)
		{
			n--;
		}
	}
	else
	{
		printf(",");
		printf(" ");
	}
	printf("\n");
}
