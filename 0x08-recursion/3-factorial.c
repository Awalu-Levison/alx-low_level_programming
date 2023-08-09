#include "main.h"
/**
 * factorial - Computes a factorial of any given number
 * @n: Integer variable to use
 * Return: (0 on successful execution)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
