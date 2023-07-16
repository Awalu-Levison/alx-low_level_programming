#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - A program to print lowercase letters in reverse direction
 * Return: (0 - Execution success)
 */
int main(void)
{
	char reverse;

	for (reverse = '122'; reverse <= '97'; reverse--)
	{
		putchar(reverse);
	}
	putchar('\n');
}
