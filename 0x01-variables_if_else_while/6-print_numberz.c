#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - A program that print numbers of base 10
 * Return: 0(Successful execution)
 */
int main(void)
{
	int numberz;

	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar((numberz % 10) + '0');
	}
	putchar('\n');
}
