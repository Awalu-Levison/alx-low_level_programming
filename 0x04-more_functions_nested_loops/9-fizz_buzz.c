#include <stdio.h>
#include "main.h"
/**
 * _printFizzBuzz - Prints Fizz (multiples of 3),
 * Buzz (multiples of 5), and FizzBuzz (multiples of both 3 and 5).
 * @n:Parameter to use
 */
void _printFizzBuzz(int n)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (number_series % 3 == 0)
			printf("Fizz");
		else if (number_series % 5 == 0)
			printf("Buzz");
		else if (number_series % 15 == 0)
			printf("FizzBuzz");
		else
			printf("%d ", number_series);
	}
	printf("\n");
}
