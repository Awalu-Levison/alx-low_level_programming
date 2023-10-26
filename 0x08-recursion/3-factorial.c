#include "main.h"
/**
 * factorial - Returning the factorial og a number
 * @n: The number passed to the function
 * Return: The factorial of a number
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
