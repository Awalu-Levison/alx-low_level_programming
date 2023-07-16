#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - Printing numbers separated by comma
 * Return: (0 On successful program execution
 */
int main(void)
{
	int special_numbers;

	for (special_numbers = 0; special_numbers < 10; special_numbers++)
	{
		putchar((special_numbers % 10) + '0');
		if (special_numbers == 9)
		continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
