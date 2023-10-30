#include <stdio.h>
/**
 * main - Multiplying two numbers
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 Upon success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
