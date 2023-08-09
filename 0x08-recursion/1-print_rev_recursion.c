#include "main.h"
/**
 * _print_rev_recursion - Printing in reverse mode
 * using recursion in C
 * @s: Character variable to use
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
	}
	_putchar(s--);
	_putchar('\n');
}
