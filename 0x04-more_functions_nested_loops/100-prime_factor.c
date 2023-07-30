#include <stdio.h>
/**
 * main - Entry point of program execution
 * finds and prints the largest prime factor of 612852475143
 * Return: (0 on successful execution)
 */
int main(void)
{
	long int initial_number, second_number, third_number;

	initial_number = 612852475143;

	for (second_number = 1; second_number <= initial_number; second_number++)
	{
		if (initial_number % second_number == 0)
		{
			if (initial_number == second_number)
			{
				printf("%ld\n", second_number);
				break;
			}
		}
	}
	return (0);
}
