#include "main.h"
/**
 * prime_check - Check if a number is prime number
 * @x: First number
 * @y: Second number
 * Return: Something
 */
int prime_check(int x, int y)
{
	if (x <= 1 || (x != y && x % y == 0))
	{
		return (0);
	}
	else if (x == y)
	{
		return (1);
	}
	return (prime_check(x, y + 1));
}
/**
 * is_prime_number - Find the occurence of prime number
 * @n: The number to be checked
 * Return: Something
 */
int is_prime_number(int n)
{
	return (prime_check(n, 2));
}
