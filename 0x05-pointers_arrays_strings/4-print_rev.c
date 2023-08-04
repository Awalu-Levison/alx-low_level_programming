#include "main.h"
/**
 * print_rev - Prints a string in reverse direction
 * @s: Character variable to be used
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		*s++;
	}
	s--;
	_putchar('\n');
}
