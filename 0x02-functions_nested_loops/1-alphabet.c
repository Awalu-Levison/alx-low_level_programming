#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of program execution
 * void print_alphabet:Printing alphabet in lower cases
 * Return: (0 Always successful execution)
 */
int main(void)
{
	void print_alphabet(void)
	{
	for (char lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		_putchar(lowercase);
	}
		_putchar('\n');
	}
	return (0);
}
