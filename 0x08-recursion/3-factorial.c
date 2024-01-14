#include "main.h"
/**
 * factorial - Finding the factorial of any positive number
 * @n: The number used to calculate the factorial
 * Return: Factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
