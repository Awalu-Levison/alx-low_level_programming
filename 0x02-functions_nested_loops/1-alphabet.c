#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 * Return: Always 0 (successful execution)
 */
void print_alphabet(void)
{
	int y;

	for (y = 97; y <= 122; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
	return (0);
}
