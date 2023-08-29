#include <stdio.h>
/**
 * main - Printing the sum of multiples
 * of 3 and 5 in a range 1024 below
 * Return: Sum of multiples of 3 and 5
 */
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	return (0);
}
