#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Printing its own opcodes of main()
 *
 * @argc: argument counting
 * @argv: actual arguments given
 * Return: 0 Always successful
 */
int main(int argc, int *argv[])
{
	int bytes, x;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == byes)
		{
			printf("%02hhx\n", arr[x]);
			break;
		}
		printf("%02hhx ", arr[x]);
	}
	return (0);
}
