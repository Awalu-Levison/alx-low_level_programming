#include "main.h"
/**
 * flip_bits - Fliping the number of bits from
 * another number to another number
 * @n: First number to be used
 * @m: Second number to be used
 * Return: Number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, y = 0; /*y: bit counter*/
	unsigned long int i;
	unsigned long int j = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		i = j >> x;
		if (i & 1)
			y++;
	}
	return (y);
}
