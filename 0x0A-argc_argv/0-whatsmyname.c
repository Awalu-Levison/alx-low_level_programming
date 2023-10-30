#include <stdio.h>
/**
 * main - Printing out the program name in commandline environment
 *
 * @argc: Number of commands passed to the function
 * @argv: Array contains the commandline arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv[0]);

	return (0);
}
