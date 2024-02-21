#include "main.h"
/**
 * get_bit - A function that get bit at given index
 * @n: Bit given by the user
 * @index: Position of a bit
 * Return: Value of bit at given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int j;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	j = 0;

	while (j < index)
	{
		n = n >> 1;
		j++;
	}
	return ((n & 1));
}
