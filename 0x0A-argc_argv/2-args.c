#include <stdio.h>
/**
 * main - Printing commandline args
 *
 * @argc: Number of commandline args
 * @argv: Array contahins the arguments
 * Return: 0 upon successful execution
 */
int main(int argc, char *argv[])
{
	int iterator;

	for (iterator = 0; iterator < argc; iterator++)
	{
		printf("%s\n", argv[iterator]);
	}
	return (0);
}
