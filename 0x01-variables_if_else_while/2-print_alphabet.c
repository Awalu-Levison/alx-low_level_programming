#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - A program to print alphabet in lower case
 * Return: 0 (Upon successful execution)
 */
int main(void)
{
	char lowercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
