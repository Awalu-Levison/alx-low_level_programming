#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Adding two positive numbers
 *
 * @argc: Number of arguments
 * @argv: Array contains the actuakl arguments
 * Return: 0 as is successful as usual
 */
int main(int argc, char *argv[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; b++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i][j]);
	}
	printf("%d\n", add);

	return (0);
}
