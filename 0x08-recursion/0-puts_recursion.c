#include "main.h"
/**
 * _puts_recursion - Printing characters using recursion
 * @s: A character variable to be used
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(s++);
	}
	_putchar('\n');
}
