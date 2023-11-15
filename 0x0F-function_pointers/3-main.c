#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Prints result after simple operation
 * @argc: Number of arguments passed to the function
 * @argv: Arrays of pointers to actual arguments
 * Return: 0 upon successful execution
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int a, b; /*first and last number respectively*/
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && b != 0) ||
			(*op == '%' && b != 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
