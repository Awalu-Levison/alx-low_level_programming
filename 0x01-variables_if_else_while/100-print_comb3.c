#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - Printing Numbers in a complex pattern
 * Return: (0 Always success execution of program)
 */
int main(void)
{
	int first_num;
	int second_num;

	for (first_num = 0; first_num < 9; first_num++)
	{
		for (second_num = 1; second_num < 10; second_num++)
		{
			putchar((first_num % 10) + '0');
			putchar((second_num % 10) + '0');

			if (first_num == 8 && second_num == 9)
			{
				continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
