#include "main.h"
/**
 * flip_bits - A function that flip bits from one number
 * to another number
 * @n: First number
 * @m: Second number
 * Return: Number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, counter = 0;
	unsigned long int a;
	unsigned long int b = n ^ m; /*XOR*/

	i = 63;

	while (i >= 0)
	{
		a = b >> i;
		if (a & 1)
			counter++;
		i--;
	}
	return (counter);
}
