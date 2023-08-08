#include "main.h"
/**
 * puts_half - A function to print the second half of the string
 * @str: Character variable to be used
 */
void puts_half(char *str)
{
	int var_str, n, length;

	length = 0;

	for (var_str = 0; str[var_str] != '\0'; var_str++)
	{
		length++;
	}
	n = (length / 2);

	if (length % 2 == 1)
	{
		n = ((length + 1) / 2);
	}
	for (var_str = n; str[var_str] != '\0'; var_str++)
	{
		_putchar(str[var_str]);
	}
	_putchar('\n');
}
