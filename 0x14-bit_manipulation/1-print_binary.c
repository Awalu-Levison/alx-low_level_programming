#include "main.h"
/**
 * binary_converter - Converting from decimals to binary number
 * @n: The number given by user
 * Return: void
 */
void binary_converter(unsigned long int n)
{
	if (n == 0)
		return;
	binary_converter(n >> 1);
	if ((n & 1) == 1)
		_putchar('1');
	if ((n & 1) == 0)
		_putchar('0');
}

/**
 * print_binary - Binary representation
 * @n: The number given by user
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
	{
		binary_converter(n);
	}
}
