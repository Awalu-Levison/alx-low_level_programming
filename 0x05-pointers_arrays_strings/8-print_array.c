#include <stdio.h>
#include "main.h"
/**
 * print_array - A function that prints given array
 * @a: First parameter to checkupon
 * @n: Second parameter to checkupon
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
