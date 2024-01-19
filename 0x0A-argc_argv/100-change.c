#include "main.h"
/**
 * main - A function that calculates change based of money given
 * @argc: Argument counting
 * @argv: Arguments passed to the function
 * Return: 0 on successful
 */
int main(int argc, char *argv[])
{
	int cents, coins_min = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		if (cents >= 10)
			cents -= 10;
		if (cents >= 5)
			cents -= 5;
		if (cents >= 2)
			cents -= 2;
		if (cents >= 1)
			cents -= 1;
		coins_min++;
	}
	printf("%d\n", coins_min);
	return (0);
}
