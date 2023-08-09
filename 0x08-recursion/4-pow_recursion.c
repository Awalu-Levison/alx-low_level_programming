#include "main.h"
/**
 * _pow_recursion - Calculating the power of
 * given number provided with its power
 * @x: Base number to be used
 * @y: Power of the base to be used
 * Return: (0 denotes successful execution)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	x = x ^ y;
	return (_pow_recursion(x, y));
}
