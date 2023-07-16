#include <stdio.h>
/**
 * main - Entry point of program excution
 * Description - Printing hexadecimal numbers
 * Return: (0 Denote successful program execution)
 */
int main(void)
{
	char hexa_decimals;
	char hex_letters;

	for (hexa_decimals = '0'; hexa_decimals < '10'; hexa_decimals++)
	{
		putchar(hexa_decimals);
	}
	for (hex_letters = 'a'; hex_letters <= 'f'; hex_letters++)
	{
		putchar(hex_letters);
	}
	putchar('\n');
	return (0);
}
