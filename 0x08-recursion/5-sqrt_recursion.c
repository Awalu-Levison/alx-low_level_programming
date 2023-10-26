#include "main.h"
/**
 * sqrt - Calculate natural square root of a number
 * @x: First number
 * @y: Second number
 * Return: Square root of a given numbers else -1
 */
int sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > 4)
	{
		return (-1);
	}
	else
	{
		return (sqrt(x, y + 1));
	}
/**
 * _sqrt_recursion - Find the natural square root of a number
 * @n: The number to be used
 * Return: The square root
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 0));
}
