#include "main.h"
/**
 * _sqrt_recursion - Calculate the square root
 * of the whole problem
 * @n: Main parameter to use
 * Return: (Natural square root of a number)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Calculate the square root of
 * a given number
 * @i: Inner parameter
 * @n: Integer parameter to use
 * Return: (0 is success)
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
