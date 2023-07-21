#include "main.h"
/**
 * Description: A program to print lowercases
 * Return: (0 to print alphabet to the screen)
 * print_alphabet: Upon successful completion return lowercases to the screen
 */
void print_alphabet(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		_putchar(lower);
	}
	_putchar('\n');
	return (0);
}
