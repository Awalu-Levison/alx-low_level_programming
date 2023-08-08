#include "main.h"
/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: Character variable to use
 */
void puts2(char *str)
{

	int x = 0;

	int g = 0;

	char *y = str;

	int v;

	while (*y != '\0')
	{
		y++;
		x++;
	}
	g = x - 1;
	for (v = 0; v <= g; v++)
	{
		if (v % 2 == 0)
		{
			_putchar(str[v]);
		}
	}
	_putchar('\n');
}
