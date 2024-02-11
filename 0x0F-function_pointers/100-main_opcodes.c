#include <stdio.h>
#include <stdlib.h>
/**
 * main - Printing opcodes of its own function
 * @argc: Argument count
 * @argv: The actual args
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int nbytes, num;
	int (*func_ptr)(int, char **) = main;
	unsigned char mycode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (num = 0; num < nbytes; num++)
	{
		mycode = *(unsigned char *)func_ptr;
		printf("%.2x", mycode);

		if (num == nbytes - 1)
			continue;
		printf(" ");
		func_ptr++;
	}
	printf("\n");
	return (0);
}
