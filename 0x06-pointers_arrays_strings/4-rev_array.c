#include "main.h"
/**
 * reverse_array - Reversing the array of type int
 * @a: First parameter
 * @n: Second parameter
 * return: Nothing
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
