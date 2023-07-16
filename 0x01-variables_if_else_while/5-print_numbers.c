#include <stdio.h>
/**
 * main - Entry point of program execution
 * Description: Print numbers of base 10 starting from zero to nine
 * Return: (Zero on successful compilation)
 */
int main(void)
{
	int nambaz;

	for (nambaz = 0; nambaz < 10; nambaz++)
	{
		printf("%d", nambaz);
	}
	printf("\n");
}
