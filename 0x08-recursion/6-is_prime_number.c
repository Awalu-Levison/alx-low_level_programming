#include "main.h"
/**
 * is_prime_number - Check if number is prime
 * @n: Integer varaiable to checkupon
 * Return: (0 denotes successful program execution
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 10 != 0)
		return (1);
	return (0);
}
