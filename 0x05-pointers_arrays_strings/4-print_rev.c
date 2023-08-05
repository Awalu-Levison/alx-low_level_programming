#include "main.h"
/**
 * print_rev - Prints a string in reverse direction
 * @s: Character variable to be used
 */
void print_rev(char *s)
{
	int j, q;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	for (q = j - 1; q >= 0; q--)
	{
		_putchar(s[q]);
	}

	_putchar('\n');
}
