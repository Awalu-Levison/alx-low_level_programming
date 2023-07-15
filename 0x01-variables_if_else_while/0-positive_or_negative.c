#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - A program to print values of  n interger values
 * Return: 0 Always success
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
