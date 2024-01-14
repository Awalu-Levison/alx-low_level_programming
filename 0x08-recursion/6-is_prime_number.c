#include "main.h"
/**
 * _prime_num_a - Calculate prime number
 * @num1: First integer
 * @num2: Second integer
 * Return: Prime muber or 0
 */
int _prime_num_a(int num1, int num2)
{
	if ((num1 <= 1) || (num1 != num2 && num1 % num2 == 0))
	{
		return (0);
	}
	else if (num1 == num2)
	{
		return (1);
	}
	return (_prime_num_a(num1, num2 + 1));
}
/**
 * is_prime_number - Find prime number recursively
 * @n: A number given by user
 * Return: Prime Number(1) or 0
 */
int is_prime_number(int n)
{
	return (_prime_num_a(n, 2));
}
