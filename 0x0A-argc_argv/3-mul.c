#include "main.h"
/**
 * main - Entry point
 * @argc: Counting args
 * @argv: Actual args passed
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc == 2)
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
