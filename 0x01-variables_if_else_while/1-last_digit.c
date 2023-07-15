#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - Printing the last digit of a given number
 * Return: 0 (Upon successful compilation)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastg;
	lastg = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (lastg > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastg);
	}
	else if (lastg == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastg);
	}
	else
	{
		print("Last digit of %d is %d and is less than 6 and not 0\n", n, lastg);
	}
	return (0);
}
