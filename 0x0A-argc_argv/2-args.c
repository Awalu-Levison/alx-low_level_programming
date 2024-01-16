#include "main.h"
/**
 * main - Entry pointy of program
 * @argc: Argument count
 * @argv: Arguments passed
 * Return: 0
 */
int main(int argc), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv);
	}
	return (0);
}
