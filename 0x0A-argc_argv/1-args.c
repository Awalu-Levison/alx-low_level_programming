#include <stdio.h>
/**
 * main - The concept of commandline arguments
 *
 * @argc: Counting the number of arguments
 * @argv: The array carying the actual args
 * Return: (Always successful)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
