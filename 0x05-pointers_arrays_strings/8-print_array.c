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
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
