#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of program
 * Return: 0 on successful execution
 */
int main(void)
{
	int number_series;

	for (number_series = 1; number_series <= 100; number_series++)
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
