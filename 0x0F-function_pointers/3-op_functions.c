#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - Adding two numbers
 *
 * @a: First number
 * @b: Second number
 * Return: Integer value
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracting two numbers
 * @a: First parameter
 * @b: Second parameter
 * Return: Integer value
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplying two numbers
 * @a: First number to be used
 * @b: Second number to be used
 * Return: Integer value
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Dividing two numbers
 * @a: First number
 * @b: Second number
 * Return: Integer value
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Operating modulus of a number
 * @a: First number given
 * @b: Second number given
 * Return: Remender of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
