#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - A program to print lowercase letters in reverse direction
 * Return: (0 - Execution success)
 */
int main(void)
{
	char reverse_letters;

	for (reverse_letters = 'z'; reverse_letters <= 'a'; reverse_letters--)
	{
		putchar(reverse_letters);
	}
	putchar('\n');
	return (0);
}
