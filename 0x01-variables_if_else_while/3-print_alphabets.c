#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - A program that prints alphabet in lower case and in upper case
 * Return: (0 on success execution)
 */
int main(void)
{
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
