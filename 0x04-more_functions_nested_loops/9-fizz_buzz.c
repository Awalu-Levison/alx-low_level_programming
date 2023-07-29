#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of program
 * Return: 0 on successful execution
 */
int main(void)
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
	return (0);
}
