#include "main.h"
/**
 * _pow_recursion - Find the power of a number
 * @x: Base number
 * @y: Exponent number
 * Return: Value of x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0 || y == 1)
		return (1);
	return (x * _pow_recursion(x, y - 1));

	return (0);
}
