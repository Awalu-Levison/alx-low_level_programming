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
	int a, b, add = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[a][b]);
	}
	printf("%d\n", add);

	return (0);
}
