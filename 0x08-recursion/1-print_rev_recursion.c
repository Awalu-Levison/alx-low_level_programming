#include "main.h"
/**
 * _print_rev_recursion - Printing the given string in reverse
 * @s: The string to be used
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
