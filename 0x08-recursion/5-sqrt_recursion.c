#include "main.h"
/**
 * sqrt_number - Calculate natural square root of a number
 * @x: First number
 * @y: Second number
 * Return: Square root of a given numbers else -1
 */
int sqrt_number(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (sqrt_number(x, y + 1));
	}
}
/**
 * _sqrt_recursion - Find the natural square root of a number
 * @n: The number to be used
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt_number(n, 0));
}
