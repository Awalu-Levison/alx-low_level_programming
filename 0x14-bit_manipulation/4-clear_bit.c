#include "main.h"
/**
 * clear_bit - A function that sets the value of 0 at given index
 * to 0 at a given index
 * @n: Actual number given by user
 * @index: Position to set clear the required bit
 * Return: 1 on success else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i; /*last digit*/

	i = 1;
	i = i << index;
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
