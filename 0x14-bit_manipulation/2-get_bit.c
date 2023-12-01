#include "main.h"
/**
 * get_bit - Get bit at particular index
 * @n: The bit p[assed to the function
 * @index: Position of a bit
 * Return: Bit returned or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/*i: divisor j: checker*/
	unsigned long int i, j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = 1 << index;
	j = n & i;
	if (j == i)
		return (1);
	return (0);
}
