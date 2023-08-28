#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description - Printing Numbers in a complex pattern
 * Return: (0 Always success execution of program)
 */
int main(void)
{
	int firs_num, second_num;

	for (first_num = 48; first_num <= 56; first_num++)
	{
		for (second_num = 0; second_num <= 57; second_num++)
		{
			if (second_num > first_num)
			{
				putchar(first_num);
				putchar(second_num);
				if (first_num != 56 || second_num != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
