#include "main.h"
/**
 * _pow_recursion - Find the power of two given number
 * @x: First number
 * @y: Second number
 * Return: power of the numbers
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
