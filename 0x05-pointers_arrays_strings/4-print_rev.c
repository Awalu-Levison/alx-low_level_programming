#include "main.h"
/**
 * print_rev - Prints a string in reverse direction
 * @s: Character variable to be used
 */
void print_rev(char *s)
{
	while (*s <= s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
