#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - A function that returns the sum of two numbers
 * @a: First number given
 * @b: Second number given
 * Return: Sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - A function that returns the difference of two numbers
 * @a: The first number
 * @b: The second number
 * Return: Difference of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication of two numbers
 * @a: First number
 * @b: Second number
 * Return: The product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function to divide two numbers
 * @a: First number
 * @b: Second number
 * Return: Division of a & b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Handling the modulus of two numbers
 * @a: First number
 * @b: Second number
 * Return: Remainder of a & b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
