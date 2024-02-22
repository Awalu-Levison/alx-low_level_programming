#include "main.h"
/**
 * set_bit - A function that set bit at given index
 * @n: The number given by user
 * @index: Position of the bit value
 * Return: 1 when it is successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	i = 1;
	i = i << index;
	*n = ((*n) | i);
	return (1);
}
