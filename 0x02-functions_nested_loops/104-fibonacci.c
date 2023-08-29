#include <stdio.h>
/**
 * main - Printing first 98 fibonacci numbers
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int a, b, c, j1, j2, k1, k2;

	b = 1;
	c = 2;

	printf("%lu", b);

	for (a = 1; a < 91; a++)
	{
		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}

	j1 = b / 1000000000;
	j2 = b % 1000000000;
	k1 = c / 1000000000;
	k2 = c % 1000000000;

	for (a = 92; a < 99; ++a)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
