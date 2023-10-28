#include "main.h"
/**
 ** _puts - Prints string to the stdout
 ** @str: Character variable to be used
 **/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
